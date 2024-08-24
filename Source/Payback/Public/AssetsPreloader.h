#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadingInProgressInterface.h"
#include "GameFramework/Actor.h"
#include "AssetsPreloader.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAYBACK_API AAssetsPreloader : public AActor, public IIGS_LoadingInProgressInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldPreload;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> m_LoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_LoadedObjects;
    
public:
    AAssetsPreloader(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

