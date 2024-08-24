#include "CommonMissionsDatabase.h"
#include "Templates/SubclassOf.h"

UCommonMissionsDatabase::UCommonMissionsDatabase() {
}

FCommonMissionDataStory UCommonMissionsDatabase::GetStoryDataBP(const UObject* inWCO, const TSubclassOf<UIGS_StoryMissionObject>& inClass, bool& outSucceeded) {
    return FCommonMissionDataStory{};
}

FCommonMissionDataSmallHit UCommonMissionsDatabase::GetSmallHitDataBP(const UObject* inWCO, const TSubclassOf<UIGS_SmallHitMissionObject>& inClass, bool& outSucceeded) {
    return FCommonMissionDataSmallHit{};
}

ECommonMissionType UCommonMissionsDatabase::GetMissionTypeByObject(const TSubclassOf<UIGS_BaseMissionObject>& inClass) const {
    return ECommonMissionType::Type_UNKNOWN;
}

FCommonMissionDataMediumHeist UCommonMissionsDatabase::GetMediumHeistDataBP(const UObject* inWCO, const TSubclassOf<UIGS_MediumHeistMissionObject>& inClass, bool& outSucceeded) {
    return FCommonMissionDataMediumHeist{};
}

FCommonMissionDataBigHeist UCommonMissionsDatabase::GetBigHeistDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BigHeistMissionObject>& inClass, bool& outSucceeded) {
    return FCommonMissionDataBigHeist{};
}

FCommonMissionDataBase UCommonMissionsDatabase::GetBaseMissionDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BaseMissionObject>& inClass, ECommonMissionType& outMissionType, bool& outSucceeded) {
    return FCommonMissionDataBase{};
}


