#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterState.h"
#include "CommonHeisterLoadout.h"
#include "IGS_ChainCharacter.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonHeisterLoadout OverrideLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_CharacterState OverrideState;
    
    FIGS_ChainCharacter();
};

