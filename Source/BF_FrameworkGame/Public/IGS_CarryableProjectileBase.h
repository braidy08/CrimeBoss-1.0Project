#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableProjectileBase.h"
#include "IGS_CarryableProjectileBase.generated.h"

class UIGS_PickupClassesData;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_CarryableProjectileBase : public AIGS_ThrowableProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PickupClassesData* PickupClasses;
    
public:
    AIGS_CarryableProjectileBase(const FObjectInitializer& ObjectInitializer);

};

