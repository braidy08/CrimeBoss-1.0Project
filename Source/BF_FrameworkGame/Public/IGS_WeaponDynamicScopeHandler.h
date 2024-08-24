#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_WeaponDynamicScopeHandler.generated.h"

class AIGS_WeaponBase;
class UIGS_WeaponModsHandler;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponDynamicScopeHandler : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_WeaponBase> OwningWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> DynamicScopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> SightMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_WeaponModsHandler> WeaponModsHandler;
    
public:
    UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAimChanged(bool inAim);
    
};

