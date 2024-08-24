#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_VehicleSplineGroup.h"
#include "TrafficPathfindingQuerrySettings.generated.h"

class UIGS_TrafficPathComponentFramework;

UCLASS(Blueprintable)
class BF_AI_API UTrafficPathfindingQuerrySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_VehicleSplineGroup VehicleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TrafficPathComponentFramework* StartSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TrafficPathComponentFramework* EndSegment;
    
    UTrafficPathfindingQuerrySettings();

};

