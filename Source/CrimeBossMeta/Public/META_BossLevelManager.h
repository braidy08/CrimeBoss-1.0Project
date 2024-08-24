#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "UObject/Interface.h"
#include "EMETA_BonusType.h"
#include "EMETA_BossLevelCategory.h"
#include "META_AdditionalHeister.h"
#include "META_BossLevelSaveData.h"
#include "META_BossLevelManager.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_BossLevelManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_BossLevelManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IncreaseBonusTypeAfterLvlUp(EMETA_BonusType inBonus, bool& bNeedSelectBonuses);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBonusMaxLvl(EMETA_BonusType inBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTotalPointsForLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_AdditionalHeister> GetStartingHeistersDataByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPreparedBonuses(TArray<EMETA_BonusType>& outPrepraredBonuses, bool& bReadyForSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCurrentBonusValueByType(EMETA_BonusType inBonusType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EMETA_BonusType, float> GetCurrentBonusesValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_BossLevelCategory GetCategoryByBonusType(EMETA_BonusType inBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_PerkData> GetCaptainPerksByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_PerkData> GetBossPerksByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBossLevelData(int32 InLevel, FMETA_BossLevelSaveData& outLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBossLevel(int32& outLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBonusValueByLvl(EMETA_BonusType inBonus, int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBonusCurrentLvl(EMETA_BonusType inBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesBonusTypeHavePercentageValueType(EMETA_BonusType inBonusType);
    
};

