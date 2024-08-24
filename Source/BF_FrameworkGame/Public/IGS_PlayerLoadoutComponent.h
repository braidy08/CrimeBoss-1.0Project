#pragma once
#include "CoreMinimal.h"
#include "META_PerkDataToFPS.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerLoadoutComponent.generated.h"

class IIGS_InventoryInterface;
class UIGS_InventoryInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerLoadoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IIGS_InventoryInterface> OwningCharacterInventoryInterface;
    
public:
    UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GivePerks(const TArray<FMETA_PerkDataToFPS>& inPerkIDs);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeLoadout();
    
};

