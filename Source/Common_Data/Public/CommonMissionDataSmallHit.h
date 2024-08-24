#pragma once
#include "CoreMinimal.h"
#include "CommonMissionDataBase.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionDataSmallHit.generated.h"

class UIGS_SmallHitMissionObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataSmallHit : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SmallHitMissionObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistrictVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveEnvironment;
    
    FCommonMissionDataSmallHit();
};

