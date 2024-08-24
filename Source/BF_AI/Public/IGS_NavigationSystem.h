#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavEdgeProviderInterface.h"
#include "NavigationSystem.h"
#include "IGS_NavigationSystem.generated.h"

class AIGS_NavHintVolume;

UCLASS(Blueprintable, NonTransient)
class BF_AI_API UIGS_NavigationSystem : public UNavigationSystemV1, public INavEdgeProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AIGS_NavHintVolume*> m_NavHints;
    
public:
    UIGS_NavigationSystem();


    // Fix for true pure virtual functions not being implemented
};

