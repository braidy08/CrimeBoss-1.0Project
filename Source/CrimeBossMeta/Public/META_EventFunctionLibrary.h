#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectType.h"
#include "META_CharacterInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMETA_BonusType.h"
#include "META_EventFunctionLibrary.generated.h"

class IMETA_BossLevelManager;
class UMETA_BossLevelManager;
class UMETA_BaseGoal;
class UMETA_BaseObject;
class UMETA_Character;
class UMETA_PlotlineAsset;
class UMETA_Weapon;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_EventFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_EventFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UTexture2D* WidgetToTexture(const UUserWidget* InWidget, const FVector2D& inDrawSize, TEnumAsByte<EPixelFormat> inFormat);
    
    UFUNCTION(BlueprintCallable)
    static void SortWeaponSubcategoryAndQuality(UPARAM(Ref) TArray<UMETA_Weapon*>& Weapons);
    
    UFUNCTION(BlueprintCallable)
    static void SortWeaponCategoryAndQuality(UPARAM(Ref) TArray<UMETA_Weapon*>& Weapons);
    
    UFUNCTION(BlueprintCallable)
    static void SortHeisterByQualityAndLevel(UPARAM(Ref) TArray<FMETA_CharacterInfo>& Heisters);
    
    UFUNCTION(BlueprintCallable)
    static void SortGoalsByPriority(UPARAM(Ref) TArray<UMETA_BaseGoal*>& inGoals, bool inAscSort);
    
    UFUNCTION(BlueprintCallable)
    static void SortBonusesByLevel(UPARAM(Ref) TScriptInterface<IMETA_BossLevelManager>& bossLevelManager, UPARAM(Ref) TMap<EMETA_BonusType, float>& Bonuses);
    
    UFUNCTION(BlueprintCallable)
    static void GetMetaObjectType(UMETA_BaseObject* inObject, EMETA_ObjectType& outObjectType, UMETA_Character*& outCharacter, UMETA_Weapon*& outWeapon, UMETA_PlotlineAsset*& outPlotlineAsset);
    
};

