#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "META_DetectiveInfo.h"
#include "Templates/SubclassOf.h"
#include "META_HeatManager.generated.h"

class UMETA_DetectiveID;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_HeatManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_HeatManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPoliceInvestigationValue(bool inSetProgressValueAsMax, float inProgressValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayersHeatState(EMETA_Heat inNewHeat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPoliceInvestigationValue(float& outProgressValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_Heat GetPlayersHeatState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_Gang GetCurrentSheriffTargetGang();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> GetActiveDetectives();
    
};

