#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_ThirdPersonDeathAnimations.generated.h"

class AActor;
class AIGS_IntelligentGameCharacter;
class UPhysicalAnimationComponent;
class UPlayerDeathAnimationDatabase;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_ThirdPersonDeathAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDeathAnimationDatabase* m_PlayerDeathAnimationDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* m_Physical_animation_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* m_InCharacter;
    
public:
    UIGS_ThirdPersonDeathAnimations();

protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

