using UnrealBuildTool;

public class CrimeBossMeta : ModuleRules {
    public CrimeBossMeta(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_FrameworkGame",
            "BF_GUI",
            "BF_Input",
            "BF_Voiceover",
            "BinkMediaPlayer",
            "Common_Data",
            "Common_Save",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GenericGraphRuntime",
            "PaybackDefinitions",
            "UMG",
        });
    }
}
