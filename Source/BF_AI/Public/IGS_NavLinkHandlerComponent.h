#pragma once
#include "CoreMinimal.h"
#include "IGS_TransitionHandlerBaseComponent.h"
#include "IGS_NavLinkHandlerComponent.generated.h"

class UIGS_NavlinkDoorTransition;
class UIGS_NavlinkJumpTransition;
class UIGS_NavlinkLadderTransition;
class UIGS_NavlinkRappelTransition;
class UIGS_NavlinkTransition;
class UIGS_NavlinkTransitionBase;
class UIGS_NavlinkWalkThroughTransition;
class UIGS_NavlinkZiplineTransition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkHandlerComponent : public UIGS_TransitionHandlerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkTransitionBase* CurrentTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkTransition* m_NavlinkTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkZiplineTransition* m_NavlinkZiplineTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkLadderTransition* m_NavlinkLadderTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkRappelTransition* m_NavlinkRappelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkDoorTransition* m_NavlinkDoorTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkJumpTransition* m_NavlinkJumpTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_NavlinkWalkThroughTransition* m_NavlinkWalkThroughTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSlideForLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseDoors;
    
public:
    UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer);

};

