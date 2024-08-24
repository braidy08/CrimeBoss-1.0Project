using UnrealBuildTool;

public class BF_GUI : ModuleRules {
    public BF_GUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "BF_Input",
            "CommonUI",
            "Common_Data",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "KantanChartsDatasource",
            "KantanChartsSlate",
            "KantanChartsUMG",
            "PaybackDefinitions",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
