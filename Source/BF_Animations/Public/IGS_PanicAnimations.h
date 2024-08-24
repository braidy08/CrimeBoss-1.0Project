#pragma once
#include "CoreMinimal.h"
#include "IGS_StateAnimationsBase.h"
#include "IGS_PanicAnimations.generated.h"

class UIGS_CharacterData;
class UIGS_ZiptieComponent;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_PanicAnimations : public UIGS_StateAnimationsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_CharacterData* CharData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_ZiptieComponent* ZiptieComponent;
    
public:
    UIGS_PanicAnimations();

    UFUNCTION(BlueprintCallable)
    void OnZiptieFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnStoodUp();
    
    UFUNCTION(BlueprintCallable)
    void OnGotToGround();
    
};

