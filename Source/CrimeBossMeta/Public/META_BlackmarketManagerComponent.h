#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "META_BlackmarketManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BlackmarketManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer);

};

