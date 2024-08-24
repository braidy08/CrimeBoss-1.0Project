#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_InteractiveComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupInteractiveComponent.generated.h"

class AIGS_PlayerControllerFramework;
class UAkAudioEvent;
class UIGS_InventoryObjectFramework;
class UIGS_ModInventoryObject;
class UIGS_SkinData;
class UMETA_WeaponInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PickupInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocallyAlreadyUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> ItemClassToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> ItemWeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ModInventoryObject>> ItemModsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SkinData* WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InventoryObjectUniversalData UniversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultPickupAkEvent;
    
public:
    UIGS_PickupInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UseInternal(AIGS_PlayerControllerFramework* InPlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, int32 inGlobalItemCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ServerUseInternal(AIGS_PlayerControllerFramework* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ServerCanUseInternal(AIGS_PlayerControllerFramework* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanUseInternal(AIGS_PlayerControllerFramework* InPlayerController);
    
};

