#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "META_CharacterData.h"
#include "META_CharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqGenericId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CharacterData Data;
    
    FMETA_CharacterInfo();
};

