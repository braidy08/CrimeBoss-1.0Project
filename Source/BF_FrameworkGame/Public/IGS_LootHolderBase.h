#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LootHolderOpenedDelegate.h"
#include "IGS_LootHolderBase.generated.h"

class AIGS_LootCollectionBase;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_LootCollectionBase* LootCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootHolderOpened OnLootHolderOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BreakToOpen;
    
    AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Open(AActor* inInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentBroken(AActor* inDmgCauser, const bool inOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
};

