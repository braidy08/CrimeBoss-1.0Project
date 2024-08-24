#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateFramework.h"
#include "CommonHeisterData.h"
#include "ECommonMissionResult.h"
#include "EIGS_MissionStartupSource.h"
#include "IGS_SpecialLoot.h"
#include "META_FPSBonusesFromMeta.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_HubScenarioType.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_Heat.h"
#include "EMETA_RespectLvl.h"
#include "META_ObjectiveTableRow.h"
#include "IGS_CopsArriveTimerFinishedDelegate.h"
#include "IGS_CopsArriveTimerStartedDelegate.h"
#include "IGS_EveryoneHasLoadedLevelDelegate.h"
#include "IGS_ForceHideEscapeWarningDelegate.h"
#include "IGS_GameStateData.h"
#include "IGS_GameStateDataReadyDelegateDelegate.h"
#include "IGS_PlayersSpawnedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameStateGame.generated.h"

class AActor;
class UIGS_GlobalInventory;
class UIGS_InventoryObjectFramework;
class UIGS_LootManager;
class UIGS_PlayerIntelManager;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameStateGame : public AIGS_GameStateFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CopsArriveTimerFinished OnCopsArriveTimerFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CopsArriveTimerStarted OnCopsArriveTimerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasEveryoneLoadedLevel, meta=(AllowPrivateAccess=true))
    bool R_HasEveryoneLoadedLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EveryoneHasLoadedLevel OnEveryoneHasLoadedLevelEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartedPlayingMatch, meta=(AllowPrivateAccess=true))
    bool R_StartedPlayingMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayersSpawnedDelegate OnStartedPlayingMatchEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameStateDataReadyDelegate OnGameStateDataReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameStateDataReadyDelegate OnMissionNameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameStateDataReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ForceHideEscapeWarning OnForceHideEscapeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEscapeVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamLastDeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailsafeMissionEndTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameStateData, meta=(AllowPrivateAccess=true))
    FIGS_GameStateData GameStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalInventory* GlobalInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerIntelManager* IntelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CopsArriveTimer, meta=(AllowPrivateAccess=true))
    float CopsArriveTimerEnd;
    
public:
    AIGS_GameStateGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwitchStartupSource(EIGS_MissionStartupSource& outBranches);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEndMission(ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable)
    void SetVOFinishMissionCharacterAndID(const FText inID, AActor* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecificLootTypes(FGameplayTagContainer inSpecificLootTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialLoot(FIGS_SpecialLoot inSpecialLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionValues(int32 inNeededMoney, int32 inMaxMoney);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionScenario(FGameplayTag inMissionScenario);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionName(FText inMissionName);
    
    UFUNCTION(BlueprintCallable)
    void SetLightScenario(const EIGS_LightingScenarioType inLightScenario);
    
    UFUNCTION(BlueprintCallable)
    void SetGameStateDataDEBUG(FIGS_GameStateData inData);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddLootBag();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddBonusPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedPlayingMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVOFinishMissionCharacterAndID(const FText& inID, AActor* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StartedPlayingMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasEveryoneLoadedLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameStateData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CopsArriveTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossDied(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllDiedOrDowned();
    
    UFUNCTION(BlueprintCallable)
    void MarkDataFinal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWantedStars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMissionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TileEnviroment GetTileEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_SWATVariationType GetSWATVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetSWATTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MissionStartupSource GetStartupSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MusicMissionState GetStartMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSpecificLootTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_SpecialLoot GetSpecialLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_GangsterVariationType GetSecondaryEnemyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetRespect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_GangsterVariationType GetPrimaryEnemyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetPrimaryEnemyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedObjectiveCompletion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubScenarioType GetMissionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSBonusesFromMeta GetMetaBonusesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UIGS_LootManager* GetLootManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LightingScenarioType GetLightingScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubBackdropTypes GetHubVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubDistrict GetHubDistrict() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeistersDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCommonHeisterData> GetHeistersData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Heat GetHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GlobalInventory* GetGlobalInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_GameStateData GetGameStateDataDEBUG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExpectedPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ScenarioDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ObjectiveTableRow GetBonusObjectiveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HeistersBackupVariationType GetAllyVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_AITiers GetAllyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndMissionNoResultScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndMission();
    
};

