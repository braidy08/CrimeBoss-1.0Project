#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_TransitionState.h"
#include "IGS_TransitionHandlerBaseComponent.generated.h"

class UIGS_TransitionData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_TransitionHandlerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_TransitionData* ActualTransitionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToStartTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToStartTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TransitionState m_State;
    
public:
    UIGS_TransitionHandlerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

