#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_SkinMaterial.h"
#include "IGS_SkinData.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_SkinData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIGS_SkinMaterial> ModSkin;
    
    UIGS_SkinData();

};

