#pragma once
#include "CoreMinimal.h"
#include "CommonMissionDataBase.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionDataBigHeist.generated.h"

class UIGS_BigHeistMissionObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataBigHeist : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_BigHeistMissionObject> ID;
    
    FCommonMissionDataBigHeist();
};

