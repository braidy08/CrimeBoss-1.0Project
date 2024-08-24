#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CameraOutlineState.h"
#include "IGS_OutlineComponent.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_OutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOutlineState, meta=(AllowPrivateAccess=true))
    EIGS_CameraOutlineState CurrentOutlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootForOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShineWhenInactive;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> m_PrimitiveComponentsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolidInteractiveOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlinkingInteractiveOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPingOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyDetectingOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyPingOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeisterOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeister2Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeister3Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeister4Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShineEnabled;
    
public:
    UIGS_OutlineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline);
    
    UFUNCTION(BlueprintCallable)
    void ResetOutline();
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentToOutline(UActorComponent* inComponentToOutline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOutlineState();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToOutline(UActorComponent* inComponentToOutline);
    
    UFUNCTION(BlueprintCallable)
    void AddComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline);
    
};

