#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "IGS_Analytics.generated.h"

UCLASS(Blueprintable)
class BF_ANALYTICS_API UIGS_Analytics : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UIGS_Analytics();

    UFUNCTION(BlueprintCallable)
    static void PlotlineCheckpointReached(int32 campaignID, const FString& checkpointID);
    
private:
    UFUNCTION(BlueprintCallable)
    static void MissionStarted(const FString& MissionName, const FString& missionVariant, bool isMultiplayer, bool isQuickJoin, bool isJIP, int32 numBots, int32 Day, int32 ArmySize, int32 armyAvailable, bool isChain, int32 investigation, int32 attempt);
    
    UFUNCTION(BlueprintCallable)
    static void MissionFinished(const FString& MissionName, const FString& missionVariant, int32 Status, float gameplayTime, const FString& weaponUsed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void InviteSent(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static void InviteAccepted(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static void DayStarted(int32 campaignID, int32 Day, int32 Heat, int32 Respect, int32 investigation, int32 Cash, int32 upkeep, int32 ownedTurfs, int32 availableHeisters, int32 AvailableArmy);
    
    UFUNCTION(BlueprintCallable)
    static void CampaignStarted(int32 campaignID, const FString& CampaignStatus, const FString& bossName, int32 playCount, int32 ownedTurfs);
    
    UFUNCTION(BlueprintCallable)
    static void CampaignFinished(int32 campaignID, const FString& CampaignStatus, const FString& bossName, int32 playCount, int32 ownedTurfs, int32 elapsedDays, int32 averageMissionStars, int32 aliveGenericHeisters, int32 missingGenericHeisters, int32 killedGenericHeisters, int32 aliveUniqueHeisters, int32 MissingUniqueHeisters, int32 killedUniqueHeisters);
    
};

