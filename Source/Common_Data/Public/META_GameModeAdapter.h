#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_RespectLvl.h"
#include "META_MissionDatabase.h"
#include "META_GameModeAdapter.generated.h"

class UMETA_Character;
class UMETA_CommonData;
class UMETA_EconomyData;
class UMETA_QuickPlayData;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_GameModeAdapter : public UInterface {
    GENERATED_BODY()
};

class IMETA_GameModeAdapter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentScreenTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSwitchToScreen(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMetaGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetUsedCharactersSurnames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetUsedCharactersFirstNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_Character*> GetUniqueHeistersFromCrew();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMETA_QuickPlayData* GetQuickplayData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EMETA_RespectLvl GetPlayerRespect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsScreenInputBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsChainMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMETA_EconomyData* GetEconomyData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag GetCurrentScreenTag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMETA_CommonData* GetCommonData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoesHeisterPresenceInCrew(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanMissionHaveObjectives(const FMETA_MissionDatabase& inMissionData);
    
};

