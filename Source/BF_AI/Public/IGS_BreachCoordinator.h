#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_BreachCoordinator.generated.h"

class UIGS_BreachData;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BreachCoordinator : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_BreachData*> BreachDatas;
    
    UIGS_BreachCoordinator();

};

