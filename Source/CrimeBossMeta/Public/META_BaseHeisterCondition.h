#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_BaseGraphComponent.h"
#include "META_Condition.h"
#include "META_BaseHeisterCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseHeisterCondition : public UMETA_BaseGraphComponent, public IMETA_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMETA_CharacterID ConsideredHeisterID;
    
public:
    UMETA_BaseHeisterCondition();

    UFUNCTION(BlueprintCallable)
    void SetConsideredHeister(FMETA_CharacterID inHeisterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetConsideredHeister();
    

    // Fix for true pure virtual functions not being implemented
};

