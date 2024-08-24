#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TransitionData.generated.h"

class UIGS_NavLinkComponentBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_TransitionData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NavLinkComponentBase* NavLink;
    
public:
    UIGS_TransitionData();

};

