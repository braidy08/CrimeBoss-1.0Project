#pragma once
#include "CoreMinimal.h"
#include "CommonMissionDataBase.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionDataMediumHeist.generated.h"

class UIGS_MediumHeistMissionObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataMediumHeist : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MediumHeistMissionObject> ID;
    
    FCommonMissionDataMediumHeist();
};

