#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_AnimIntermediaryLinker.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimIntermediaryLinker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LinkedGraphDefinition> m_LinkedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> m_LoadedClasses;
    
public:
    UIGS_AnimIntermediaryLinker();

};

