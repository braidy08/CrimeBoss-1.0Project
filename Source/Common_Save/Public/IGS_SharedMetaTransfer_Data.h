#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "CommonDetectiveData.h"
#include "IGS_MetaTransferDataBase.h"
#include "IGS_SharedMetaTransfer_Data.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SharedMetaTransfer_Data : public FIGS_MetaTransferDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonHeisterData> Heisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonDetectiveData> Detectives;
    
    FIGS_SharedMetaTransfer_Data();
};

