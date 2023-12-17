set "UAT=C:/Program Files/Unreal Engine - CSS/Engine/Build/BatchFiles/RunUAT.bat"
set "PROJECT=C:/UnrealDev/Projects/SatisfactoryModLoader/FactoryGame.uproject"

CALL "%UAT%" -ScriptsForProject=%PROJECT% PackagePlugin -project=%PROJECT% -clientconfig=Shipping -serverconfig=Shipping -utf8output -DLCName=DatadogMod -build -platform=Linux -nocompileeditor -installed -Target=FactoryServer
CALL "%UAT%" -ScriptsForProject=%PROJECT% PackagePlugin -project=%PROJECT% -clientconfig=Shipping -serverconfig=Shipping -utf8output -DLCName=DatadogMod -build -platform=Win64 -nocompileeditor -installed -Target=FactoryServer
CALL "%UAT%" -ScriptsForProject=%PROJECT% PackagePlugin -project=%PROJECT% -clientconfig=Shipping -serverconfig=Shipping -utf8output -DLCName=DatadogMod -build -platform=Win64 -nocompileeditor -installed -Target=FactoryGame
