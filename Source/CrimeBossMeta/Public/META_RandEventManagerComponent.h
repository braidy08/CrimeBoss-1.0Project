#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterState.h"
#include "META_CharacterID.h"
#include "META_HeisterStateChangeHistory.h"
#include "META_HeisterStateChangeNote.h"
#include "META_MissingHeisterEventData.h"
#include "META_RandEventsManager.h"
#include "Templates/SubclassOf.h"
#include "META_RandEventManagerComponent.generated.h"

class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_RandEventManagerComponent : public UActorComponent, public IMETA_RandEventsManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_HeisterStateChangeHistory> HeistersStateChangesHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData> MissingHeistersEvents;
    
public:
    UMETA_RandEventManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldStateChangeBeNoted(FMETA_HeisterStateChangeNote inNote);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventForMissingHeister(FMETA_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<EMETA_CharacterState> GetStatesWhichChangesShouldBeNotedInHistory();
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeFromStateToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inFromState, EMETA_CharacterState inToState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeFromState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetMissingHeisterForMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEventIdForMissingHeister(FMETA_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void DecrementMissingHeistersEventsDaysTimer(TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData>& outExpiredEvents);
    
    UFUNCTION(BlueprintCallable)
    void AddStatesChangesNote(FMETA_CharacterID inCharacterID, FMETA_HeisterStateChangeNote inNote);
    
    UFUNCTION(BlueprintCallable)
    void AddEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData inData);
    

    // Fix for true pure virtual functions not being implemented
};

