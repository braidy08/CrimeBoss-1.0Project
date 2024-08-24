#include "IGS_Analytics.h"

UIGS_Analytics::UIGS_Analytics() {
}

void UIGS_Analytics::PlotlineCheckpointReached(int32 campaignID, const FString& checkpointID) {
}

void UIGS_Analytics::MissionStarted(const FString& MissionName, const FString& missionVariant, bool isMultiplayer, bool isQuickJoin, bool isJIP, int32 numBots, int32 Day, int32 ArmySize, int32 armyAvailable, bool isChain, int32 investigation, int32 attempt) {
}

void UIGS_Analytics::MissionFinished(const FString& MissionName, const FString& missionVariant, int32 Status, float gameplayTime, const FString& weaponUsed) {
}

void UIGS_Analytics::InviteSent(const FString& PlayerId) {
}

void UIGS_Analytics::InviteAccepted(const FString& PlayerId) {
}

void UIGS_Analytics::DayStarted(int32 campaignID, int32 Day, int32 Heat, int32 Respect, int32 investigation, int32 Cash, int32 upkeep, int32 ownedTurfs, int32 availableHeisters, int32 AvailableArmy) {
}

void UIGS_Analytics::CampaignStarted(int32 campaignID, const FString& CampaignStatus, const FString& bossName, int32 playCount, int32 ownedTurfs) {
}

void UIGS_Analytics::CampaignFinished(int32 campaignID, const FString& CampaignStatus, const FString& bossName, int32 playCount, int32 ownedTurfs, int32 elapsedDays, int32 averageMissionStars, int32 aliveGenericHeisters, int32 missingGenericHeisters, int32 killedGenericHeisters, int32 aliveUniqueHeisters, int32 MissingUniqueHeisters, int32 killedUniqueHeisters) {
}


