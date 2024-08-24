#include "META_EventFunctionLibrary.h"

UMETA_EventFunctionLibrary::UMETA_EventFunctionLibrary() {
}

UTexture2D* UMETA_EventFunctionLibrary::WidgetToTexture(const UUserWidget* InWidget, const FVector2D& inDrawSize, TEnumAsByte<EPixelFormat> inFormat) {
    return NULL;
}

void UMETA_EventFunctionLibrary::SortWeaponSubcategoryAndQuality(TArray<UMETA_Weapon*>& Weapons) {
}

void UMETA_EventFunctionLibrary::SortWeaponCategoryAndQuality(TArray<UMETA_Weapon*>& Weapons) {
}

void UMETA_EventFunctionLibrary::SortHeisterByQualityAndLevel(TArray<FMETA_CharacterInfo>& Heisters) {
}

void UMETA_EventFunctionLibrary::SortGoalsByPriority(TArray<UMETA_BaseGoal*>& inGoals, bool inAscSort) {
}

void UMETA_EventFunctionLibrary::SortBonusesByLevel(TScriptInterface<IMETA_BossLevelManager>& bossLevelManager, TMap<EMETA_BonusType, float>& Bonuses) {
}

void UMETA_EventFunctionLibrary::GetMetaObjectType(UMETA_BaseObject* inObject, EMETA_ObjectType& outObjectType, UMETA_Character*& outCharacter, UMETA_Weapon*& outWeapon, UMETA_PlotlineAsset*& outPlotlineAsset) {
}


