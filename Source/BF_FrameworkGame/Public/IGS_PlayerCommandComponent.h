#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_PlayerCommandType.h"
#include "IGS_OnCommandSentEventDelegate.h"
#include "IGS_PlayerCommandComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCommandSentEvent OnCommandSentEventBP;
    
    UIGS_PlayerCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleResponseDialogue(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerCommandType inType, const FString& inPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void HandleResponseDialogue(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerCommandType inType);
    
    UFUNCTION(BlueprintCallable)
    void HandleHoldPosition(AIGS_GameCharacterFramework* inOrderedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void HandleFollow(AIGS_GameCharacterFramework* inOrderedCharacter);
    
};

