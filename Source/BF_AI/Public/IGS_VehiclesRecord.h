#pragma once
#include "CoreMinimal.h"
#include "IGS_VehiclesRecord.generated.h"

class UPFPathFollowerComponent;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehiclesRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPFPathFollowerComponent*> Vehicles;
    
    FIGS_VehiclesRecord();
};

