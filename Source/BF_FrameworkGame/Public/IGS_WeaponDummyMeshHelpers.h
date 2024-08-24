#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_WeaponDummyMeshHelpers.generated.h"

class UIGS_SkinData;
class UIGS_WeaponInventoryObject;
class UMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WeaponDummyMeshHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WeaponDummyMeshHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetupDummyWeaponMods(UMeshComponent* inWeaponMesh, UIGS_WeaponInventoryObject* inWeaponObject, UIGS_SkinData* inSkinData, bool inIsShadow);
    
};

