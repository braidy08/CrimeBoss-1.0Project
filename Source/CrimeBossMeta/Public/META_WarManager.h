#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMETA_Gang.h"
#include "EMETA_GangAttitudeList.h"
#include "META_WarManager.generated.h"

class UMapTile;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_WarManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_WarManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TurfAttackAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMapTile*> GetTilesAvailableForAttack(EMETA_Gang inAttackerGang, const TArray<EMETA_Gang>& inPreferredGangs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EMETA_Gang, int32> GetGangsWhichContainPlayerInAttitudeList(EMETA_GangAttitudeList inAttitudeList);
    
};

