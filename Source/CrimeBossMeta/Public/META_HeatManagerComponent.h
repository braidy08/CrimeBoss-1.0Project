#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "META_HeatManager.h"
#include "META_HeatManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_HeatManagerComponent : public UActorComponent, public IMETA_HeatManager {
    GENERATED_BODY()
public:
    UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

