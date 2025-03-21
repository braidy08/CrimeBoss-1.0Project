#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDefinitionTableRow.generated.h"

class UIGS_ModInventoryObject;
class UIGS_SkinData;
class UIGS_WieldableInventoryObjectBase;
class UMETA_WeaponInventoryObject;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponDefinitionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WieldableInventoryObjectBase> FPSWeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID SignatureCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_SkinData> WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedForGeneration;
    
    FIGS_WeaponDefinitionTableRow();
};

