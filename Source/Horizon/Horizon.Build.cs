
using UnrealBuildTool;

public class Horizon : ModuleRules
{
    public Horizon(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Sockets",
                "Networking",
                "Json",
                "JsonUtilities",
                "DeveloperSettings"
            }
        );
            
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Slate",
                "SlateCore",
                "HTTP"
            }
        );

        // Platform-specific dependencies
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicSystemLibraries.AddRange(new string[]
            {
                "ws2_32.lib"
            });
        }
    }
}