#pragma once
#include "CoreMinimal.h"
#include "IGS_StateAnimationsBase.h"
#include "IGS_ReactionAnimations.generated.h"

class UIGS_CharacterData;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_ReactionAnimations : public UIGS_StateAnimationsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_CharacterData* CharacterData;
    
public:
    UIGS_ReactionAnimations();

    UFUNCTION(BlueprintCallable)
    void OnReactionAnimFinished();
    
};

