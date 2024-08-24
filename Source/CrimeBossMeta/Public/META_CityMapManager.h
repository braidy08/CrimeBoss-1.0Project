#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_TurfMissionDifficulty.h"
#include "META_CityMapManager.generated.h"

class UMETA_BaseMission;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_CityMapManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_CityMapManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCurrentBossTeritoryUnderAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_TurfMissionDifficulty GetTurfMissionDifficulty(int32 inAiSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTileWithMission(const UMETA_BaseMission* inMission, FGameplayTag& outTileID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTileStrength(FGameplayTag inTileID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAiBossStrength(EMETA_Gang inBossGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAiArmyStrengthOnTileForGang(FGameplayTag inTileID, EMETA_Gang inBossGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAiArmySizeOnTileForGang(FGameplayTag inTileID, EMETA_Gang inBossGang, int32& outAiArmySize, int32& outAiSoldiersSpawnedAtOnce, int32& outPlayersSoldiersSpawnedAtOnce);
    
};

