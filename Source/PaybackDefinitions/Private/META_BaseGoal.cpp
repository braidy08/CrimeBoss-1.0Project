#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"

UMETA_BaseGoal::UMETA_BaseGoal() {
    this->Type = EMETA_GoalType::INVALID;
    this->Priority = EMETA_GoalPriority::Medium;
}

void UMETA_BaseGoal::SetMissions(TArray<TSubclassOf<UMETA_MissionID>> inMissionIDs) {
}

void UMETA_BaseGoal::SetGoalResult(EMETA_GoalStatus inResult) {
}

void UMETA_BaseGoal::RemoveMission(TSubclassOf<UMETA_MissionID> inMissionID) {
}

bool UMETA_BaseGoal::IsGoalRepeatable(int32& DaysBeetwenAttempts) {
    return false;
}

EMETA_GoalType UMETA_BaseGoal::GetType() {
    return EMETA_GoalType::INVALID;
}

FText UMETA_BaseGoal::GetTitle() {
    return FText::GetEmpty();
}

EMETA_GoalPriority UMETA_BaseGoal::GetPriority() const {
    return EMETA_GoalPriority::Low;
}

TSoftObjectPtr<UTexture2D> UMETA_BaseGoal::GetPicture() {
    return NULL;
}

TArray<TSubclassOf<UMETA_MissionID>> UMETA_BaseGoal::GetMissions() {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

EMETA_Partner UMETA_BaseGoal::GetInstigatorPartner() {
    return EMETA_Partner::None;
}

TSubclassOf<UMETA_BaseGoal> UMETA_BaseGoal::GetId() {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMETA_BaseGoal::GetIcon() {
    return NULL;
}

EMETA_GoalStatus UMETA_BaseGoal::GetGoalResult() {
    return EMETA_GoalStatus::None;
}

FText UMETA_BaseGoal::GetDescription() {
    return FText::GetEmpty();
}

void UMETA_BaseGoal::AddMission(TSubclassOf<UMETA_MissionID> inMissionID) {
}


