#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "META_CityMapManager.h"
#include "META_CityMapManagerComponent.generated.h"

class UMapTile;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_CityMapManagerComponent : public UActorComponent, public IMETA_CityMapManager {
    GENERATED_BODY()
public:
    UMETA_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetTileObject(const FGameplayTag inID, UMapTile*& outTileObject);
    

    // Fix for true pure virtual functions not being implemented
};

