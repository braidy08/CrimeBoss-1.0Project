#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "META_RandEventsManager.generated.h"

class UMETA_MissionID;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_RandEventsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_RandEventsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEventAsActive(FGameplayTag inEventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetReadyEventOfPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetEventRelatedToMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetEventPrice(FGameplayTag inEventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetActiveEventOfPartner(EMETA_Partner inPartner);
    
};

