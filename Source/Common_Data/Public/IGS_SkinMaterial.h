#pragma once
#include "CoreMinimal.h"
#include "IGS_SkinMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_SkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PaniniMaterial;
    
    FIGS_SkinMaterial();
};

