using UnrealBuildTool;

public class BF_Loading : ModuleRules {
    public BF_Loading(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_GUIBase",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "SlateCore",
        });
    }
}
