#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_WantsMoveToMountedGun.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_WantsMoveToMountedGun : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BestMountedGunKey;
    
public:
    UIGS_BTService_WantsMoveToMountedGun();

};

