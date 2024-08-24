using UnrealBuildTool;

public class BF_Network : ModuleRules {
    public BF_Network(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "Common_Data",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "PaybackDefinitions",
            "PhysicsCore",
        });
    }
}
