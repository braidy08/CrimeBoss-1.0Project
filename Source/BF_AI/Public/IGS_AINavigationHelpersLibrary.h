#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_AINavigationHelpersLibrary.generated.h"

class AActor;
class AIGS_RoomBase;
class UStaticMeshComponent;
class UTacticalPathfindingQuerrySettings;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AINavigationHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AINavigationHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static void ForceEnableForNavigation(UStaticMeshComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    static float CalcualteTacticalPathfindingDistance(TArray<AActor*> Path, UTacticalPathfindingQuerrySettings* querrySettings);
    
    UFUNCTION(BlueprintCallable)
    static void AffectNavigation(UStaticMeshComponent* comp, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRoomConnection(AIGS_RoomBase* roomOne, AIGS_RoomBase* roomTwo);
    
};

