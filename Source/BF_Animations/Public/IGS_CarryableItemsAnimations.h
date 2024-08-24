#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_CarryableItemsAnimations.generated.h"

class UIGS_UArmsAniminstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_CarryableItemsAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UArmsAniminstance* m_ArmsAnimInstance;
    
public:
    UIGS_CarryableItemsAnimations();

};

