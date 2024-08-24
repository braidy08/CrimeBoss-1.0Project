#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "META_CrewManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_CrewManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

};

