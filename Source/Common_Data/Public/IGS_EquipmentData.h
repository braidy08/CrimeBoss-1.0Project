#pragma once
#include "CoreMinimal.h"
#include "EIGS_EquipmentResourceType.h"
#include "IGS_CommonItemData.h"
#include "IGS_EquipmentData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_EquipmentData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedForGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_EquipmentResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Charges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> InitChargesGameplayEffect;
    
    FIGS_EquipmentData();
};

