#pragma once
#include "CoreMinimal.h"
#include "IGS_BoxSphere.h"
#include "IGS_LevelBlockingBounds.generated.h"

class UIGS_CustomBoxComponent;
class UIGS_LevelBlockingBoundsSettings;
class UNavModifierComponent;
class UPostProcessComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LevelBlockingBounds : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlockerSize, meta=(AllowPrivateAccess=true))
    float BlockerSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CustomBoxComponent* BlockerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_LevelBlockingBoundsSettings* Settings;
    
public:
    AIGS_LevelBlockingBounds(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBlockerSize(float inBlockerSize);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPostProcessSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BlockerSize();
    
};

