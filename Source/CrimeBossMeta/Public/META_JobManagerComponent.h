#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "META_JobParameters.h"
#include "Templates/SubclassOf.h"
#include "META_JobManagerComponent.generated.h"

class UMETA_BaseMission;
class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_JobManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_JobParameters> JobParameters;
    
public:
    UMETA_JobManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereParametersForJobInStorage(const TSubclassOf<UMETA_MissionID>& inJobID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_BaseMission*> GetMissionsOnTile(FGameplayTag inTileTag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_BaseMission*> GetAllSpawnedMissions();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, bool bFlushAfterGet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeJobParameterInStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 inChangeByValue);
    
    UFUNCTION(BlueprintCallable)
    void AddJobParameterToStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 InValue);
    
};

