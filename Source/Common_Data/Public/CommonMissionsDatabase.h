#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonMissionDataBase.h"
#include "CommonMissionDataBigHeist.h"
#include "CommonMissionDataMediumHeist.h"
#include "CommonMissionDataSmallHit.h"
#include "CommonMissionDataStory.h"
#include "ECommonMissionType.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionsDatabase.generated.h"

class UIGS_BaseMissionObject;
class UIGS_BigHeistMissionObject;
class UIGS_MediumHeistMissionObject;
class UIGS_SmallHitMissionObject;
class UIGS_StoryMissionObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UCommonMissionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCommonMissionsDatabase();

    UFUNCTION(BlueprintCallable)
    static FCommonMissionDataStory GetStoryDataBP(const UObject* inWCO, const TSubclassOf<UIGS_StoryMissionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FCommonMissionDataSmallHit GetSmallHitDataBP(const UObject* inWCO, const TSubclassOf<UIGS_SmallHitMissionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonMissionType GetMissionTypeByObject(const TSubclassOf<UIGS_BaseMissionObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FCommonMissionDataMediumHeist GetMediumHeistDataBP(const UObject* inWCO, const TSubclassOf<UIGS_MediumHeistMissionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FCommonMissionDataBigHeist GetBigHeistDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BigHeistMissionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FCommonMissionDataBase GetBaseMissionDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BaseMissionObject>& inClass, ECommonMissionType& outMissionType, bool& outSucceeded);
    
};

