#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "UObject/NoExportTypes.h"
#include "IGS_CarryableBase.generated.h"

class UIGS_CarryableInventoryObject;
class UIGS_SkinHandlerBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_CarryableBase : public AIGS_WieldableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionTimerAfterDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SkinHandlerBase* SkinHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_CarryableInventoryObject> CarryableInventoryObject;
    
public:
    AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCarryableDamagedEvent(FVector inOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyCarryable();
    
};

