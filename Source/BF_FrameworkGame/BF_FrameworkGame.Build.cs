using UnrealBuildTool;

public class BF_FrameworkGame : ModuleRules {
    public BF_FrameworkGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimationBudgetAllocator",
            "BF_Covers",
            "BF_FrameworkBase",
            "BF_Impacts",
            "BF_Input",
            "BF_Navigation",
            "BF_Pool",
            "BF_Rendering",
            "CableComponent",
            "Common_Data",
            "Common_Save",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "CustomizableObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "NavigationSystem",
            "Niagara",
            "PaybackDefinitions",
            "PhysicsCore",
            "SkinnedDecalComponent",
            "UMG",
        });
    }
}
