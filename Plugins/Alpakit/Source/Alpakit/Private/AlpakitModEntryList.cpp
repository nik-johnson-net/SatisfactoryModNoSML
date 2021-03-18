#include "AlpakitModEntryList.h"


#include "AlpakitModEntry.h"
#include "Interfaces/IPluginManager.h"

void SAlpakitModEntryList::Construct(const FArguments& Args) {
	ChildSlot[
		SAssignNew(ModList, SListView<TSharedRef<IPlugin>>)
        .SelectionMode(ESelectionMode::None)
        .ListItemsSource(&FilteredMods)
        .OnGenerateRow_Lambda([this](TSharedRef<IPlugin> Mod, const TSharedRef<STableViewBase>& List) {
        	return SNew( STableRow<TSharedRef<IPlugin>>, List)[
				SNew( SAlpakitModEntry, Mod, SharedThis(this))
			];
        })
    ];
	
    LoadMods();
}

bool DoesPluginHaveRuntime(const IPlugin& Plugin) {
	//Content plugins always have runtime component
	if (Plugin.GetDescriptor().bCanContainContent) {
		return true;
	}
	//C++ plugins have runtime component as long as one of their modules does
	for (const FModuleDescriptor& Module : Plugin.GetDescriptor().Modules) {
		if (Module.Type == EHostType::Runtime ||
			Module.Type == EHostType::RuntimeNoCommandlet ||
			Module.Type == EHostType::RuntimeAndProgram ||
			Module.Type == EHostType::ClientOnly ||
			Module.Type == EHostType::ClientOnlyNoCommandlet ||
			Module.Type == EHostType::ServerOnly ||
			Module.Type == EHostType::CookedOnly) {
			return true;
		}
	}
	return false;
}

void SAlpakitModEntryList::LoadMods() {
	Mods.Empty();
	const TArray<TSharedRef<IPlugin>> EnabledPlugins = IPluginManager::Get().GetEnabledPlugins();
	for (TSharedRef<IPlugin> Plugin : EnabledPlugins) {
		//Skip WWise, it is already shipped with the game
		if (Plugin->GetName() == TEXT("WWise")) {
			continue;
		}
		//Only include project plugins for now
		//TODO make sure UAT task supports engine plugins
		if ((bShowEngine && Plugin->GetType() == EPluginType::Engine) || Plugin->GetType() == EPluginType::Project) {
			const bool bHasRuntime = DoesPluginHaveRuntime(Plugin.Get());
			if (bHasRuntime) {
				Mods.Add(Plugin);
			}
		}
	}
	Mods.Sort([](const TSharedRef<IPlugin> Plugin1, const TSharedRef<IPlugin> Plugin2) {
		return Plugin1->GetName() < Plugin2->GetName();
	});
	Filter(LastFilter);
}

void SAlpakitModEntryList::Filter(const FString& InFilter) {
	LastFilter= InFilter;
	FilteredMods.Empty();
	
	if (InFilter.Len() < 1) {
		FilteredMods = Mods;
	} else {
		// tokenize filter keywords
		TArray<FString> FilterTokens;
		InFilter.ParseIntoArray(FilterTokens, TEXT(" "));
		if (FilterTokens.Num() < 1) FilterTokens.Add(InFilter);

		// check each mod for it to contain the tokens
		for (TSharedRef<IPlugin> Mod : Mods) {
			// check each token in mod name
			bool bFound = true;
			for (const FString& Token : FilterTokens) {
				if (!Mod->GetName().Contains(Token)) {
					bFound = false;
					break;
				}
			}

			// if a single token is missing, don't add the mod to the filtered list
			if (bFound) FilteredMods.Add(Mod);
		}
	}
	
	ModList->RequestListRefresh();
}

FString SAlpakitModEntryList::GetLastFilter() const {
	return LastFilter;
}

void SAlpakitModEntryList::SetShowEngine(bool bInShowEngine) {
	bShowEngine = bInShowEngine;
	LoadMods();
}
