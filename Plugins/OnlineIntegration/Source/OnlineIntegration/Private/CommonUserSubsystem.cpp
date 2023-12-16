// This file has been automatically generated by the Unreal Header Implementation tool

#include "CommonUserSubsystem.h"
#include "Online/Auth.h"
#include "Online/Sessions.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::SystemMessage_Error, TEXT("SystemMessage.Error"))
UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::SystemMessage_Warning, TEXT("SystemMessage.Warning"))
UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::SystemMessage_Display, TEXT("SystemMessage.Display"))
UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::SystemMessage_Error_InitializeLocalPlayerFailed, TEXT("SystemMessage.Error.InitializeLocalPlayerFailed"))
UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::Platform_Trait_RequiresStrictControllerMapping, TEXT("Platform.Trait.RequiresStrictControllerMapping"))
UE_DEFINE_GAMEPLAY_TAG(FCommonUserTags::Platform_Trait_SingleOnlineUser, TEXT("Platform.Trait.SingleOnlineUser"))

void UCommonUserSubsystem::Initialize(FSubsystemCollectionBase& Collection){ }
void UCommonUserSubsystem::Deinitialize(){ }
void UCommonUserSubsystem::WhenLocalUserInfoIsCreated(FOnLocalUserInfoCreated Delegate, int32 PlayerIndex){ }
void UCommonUserSubsystem::WhenLocalUserInfoIsCreated_Native(FOnLocalUserInfoCreated_Native::FDelegate Delegate, int32 PlayerIndex){ }
void UCommonUserSubsystem::SetMaxLocalPlayers(int32 InMaxLocalPLayers){ }
int32 UCommonUserSubsystem::GetMaxLocalPlayers() const{ return int32(); }
int32 UCommonUserSubsystem::GetNumLocalPlayers() const{ return int32(); }
ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const{ return nullptr; }
ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUser(FPlatformUserId PlatformUser) const{ return nullptr; }
const ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const{ return nullptr; }
const ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForControllerId(int32 ControllerId) const{ return nullptr; }
const ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForInputDevice(FInputDeviceId InputDevice) const{ return nullptr; }
ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayer(ULocalPlayer* LocalPlayer) const{ return nullptr; }
UOnlineAsyncOperation* UCommonUserSubsystem::CreateAuthenticationSequence(TScriptInterface<IOnlineAuthenticationHandler> Handler, FPlatformUserId PlatformUserId) { return nullptr; }
ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForAccountId(const UE::Online::FAccountId AccountId, EOnlineIntegrationUnmappedContext Context) const{ return nullptr; }
bool UCommonUserSubsystem::TryToInitializeForLocalPlay(int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin){ return bool(); }
bool UCommonUserSubsystem::TryToLoginForOnlinePlay(int32 LocalPlayerIndex){ return bool(); }
bool UCommonUserSubsystem::TryToInitializeUser(FCommonUserInitializeParams Params){ return bool(); }
void UCommonUserSubsystem::ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FCommonUserInitializeParams Params){ }
bool UCommonUserSubsystem::TryToLogOutUser(int32 LocalPlayerIndex, bool bDestroyPlayer){ return bool(); }
bool UCommonUserSubsystem::IsRealPlatformUserIndex(int32 PlatformUserIndex) const{ return bool(); }
bool UCommonUserSubsystem::IsRealPlatformUser(FPlatformUserId PlatformUser) const{ return bool(); }
FPlatformUserId UCommonUserSubsystem::GetPlatformUserIdForIndex(int32 PlatformUserIndex) const{ return FPlatformUserId(); }
int32 UCommonUserSubsystem::GetPlatformUserIndexForId(FPlatformUserId PlatformUser) const{ return int32(); }
FPlatformUserId UCommonUserSubsystem::GetPlatformUserIdForInputDevice(FInputDeviceId InputDevice) const{ return FPlatformUserId(); }
FInputDeviceId UCommonUserSubsystem::GetPrimaryInputDeviceForPlatformUser(FPlatformUserId PlatformUser) const{ return FInputDeviceId(); }
bool UCommonUserSubsystem::ShouldWaitForStartInput() const{ return bool(); }
ELoginStatusType UCommonUserSubsystem::GetLocalUserLoginStatus(FPlatformUserId PlatformUser,
		EOnlineIntegrationUnmappedContext Context) const{ return ELoginStatusType(); }
FUniqueNetIdRepl UCommonUserSubsystem::GetLocalUserNetId(FPlatformUserId PlatformUser,
		EOnlineIntegrationUnmappedContext Context) const{ return FUniqueNetIdRepl(); }
FUniqueNetIdRepl UCommonUserSubsystem::GetLocalUserNetId(FPlatformUserId PlatformUser, EOnlineIntegrationMappedContext Context) const{ return FUniqueNetIdRepl(); }
FString UCommonUserSubsystem::PlatformUserIdToString(FPlatformUserId UserId){ return FString(); }
FText UCommonUserSubsystem::GetPrivilegeDescription(ECommonUserPrivilege Privilege) const{ return FText(); }
FText UCommonUserSubsystem::GetPrivilegeResultDescription(ECommonUserPrivilegeResult Result) const{ return FText(); }
TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>> UCommonUserSubsystem::LoginLocalUser(ULocalUserInfo* UserInfo, FCommonUserInitializeParams Params){ return TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>>(); }
void UCommonUserSubsystem::SetLocalPlayerUserInfo(ULocalPlayer* LocalPlayer, const ULocalUserInfo* UserInfo){ }
FName UCommonUserSubsystem::GetServicesProvider(EOnlineIntegrationUnmappedContext Context){ return FName(); }
void UCommonUserSubsystem::SetupLoginForCrossplayRefreshTimer(FPlatformUserId InPlatformUserId){ }
void UCommonUserSubsystem::RefreshLoginForCrossplay(FPlatformUserId InPlatformUserId){ }
ULocalUserInfo* UCommonUserSubsystem::CreateLocalUserInfo(int32 LocalPlayerIndex){ return nullptr; }
void UCommonUserSubsystem::OnOnlineContextCreated(){ }
void UCommonUserSubsystem::LogOutLocalUser(FPlatformUserId PlatformUser){ }
TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>> UCommonUserSubsystem::LoginForContext(ULocalUserInfo* LocalUserInfo, EOnlineIntegrationUnmappedContext Context, TArray<ECommonUserLoginType> AllowedLoginTypes){ return TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>>(); }
TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>> UCommonUserSubsystem::LoginForCrossPlay(ULocalUserInfo* LocalUserInfo){ return TFuture<UE::Online::TOnlineResult<UE::Online::FAuthLogin>>(); }
ECommonUserPrivilege UCommonUserSubsystem::ConvertOnlineServicesPrivilege(UE::Online::EUserPrivileges Privilege){ return ECommonUserPrivilege(); }
UE::Online::EUserPrivileges UCommonUserSubsystem::ConvertOnlineServicesPrivilege(ECommonUserPrivilege Privilege){ return UE::Online::EUserPrivileges(); }
ECommonUserPrivilegeResult UCommonUserSubsystem::ConvertOnlineServicesPrivilegeResult(UE::Online::EUserPrivileges Privilege, UE::Online::EPrivilegeResults Results){ return ECommonUserPrivilegeResult(); }
void UCommonUserSubsystem::CacheConnectionStatus(EOnlineIntegrationUnmappedContext Context){ }
TSharedPtr<UE::Online::FAccountInfo> UCommonUserSubsystem::GetOnlineServiceAccountInfo(UE::Online::IAuthPtr AuthService, FPlatformUserId InUserId) const{ return TSharedPtr<UE::Online::FAccountInfo>(); }
void UCommonUserSubsystem::HandleAuthLoginStatusChanged(const UE::Online::FAuthLoginStatusChanged& EventParameters, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandlePendingAuthExpiration(const UE::Online::FAuthPendingAuthExpiration& PendingAuthExpiration, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleNetworkConnectionStatusChanged(const UE::Online::FConnectionStatusChanged& EventParameters, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandlePresenceUpdated(const UE::Online::FPresenceUpdated& PresenceUpdated, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleSessionInviteReceived(const UE::Online::FSessionInviteReceived& InviteReceived, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleSessionJoined(const UE::Online::FSessionJoined& SessionJoined, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleSessionLeft(const UE::Online::FSessionLeft& SessionLeft, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleSessionUpdated(const UE::Online::FSessionUpdated& SessionUpdated, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleUISessionJoinRequested(const UE::Online::FUISessionJoinRequested& SessionJoinRequested, EOnlineIntegrationUnmappedContext Context){ }
void UCommonUserSubsystem::HandleInputDeviceConnectionChanged(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId,
		FInputDeviceId InputDeviceId){ }
bool UCommonUserSubsystem::OverrideInputKeyForLogin(FInputKeyEventArgs& EventArgs){ return bool(); }
