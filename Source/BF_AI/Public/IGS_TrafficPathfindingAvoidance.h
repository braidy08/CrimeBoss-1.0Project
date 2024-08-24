#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_VehiclesRecord.h"
#include "IGS_TrafficPathfindingAvoidance.generated.h"

class UIGS_TrafficPathComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_TrafficPathfindingAvoidance : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UIGS_TrafficPathComponent*, FIGS_VehiclesRecord> VehiclesOnPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponent*> visitedPathsTmp;
    
public:
    UIGS_TrafficPathfindingAvoidance();

};

