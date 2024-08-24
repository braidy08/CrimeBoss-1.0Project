#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_StoryMissionSave.h"
#include "META_StoryMission.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_StoryMission : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_StoryMissionSave m_StoryMissionSave;
    
public:
    UMETA_StoryMission();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const UObject* inWCO, const FMETA_StoryMissionSave& inStoryMissionSave);
    
    UFUNCTION(BlueprintCallable)
    FMETA_StoryMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRestrictedTiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllowedTiles() const;
    
};

