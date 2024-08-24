#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_WeaponSubtype.h"
#include "EMETA_ItemQuality.h"
#include "IGS_MeleeWeaponTableRow.h"
#include "IGS_WeaponTableRow.h"
#include "META_BaseObject.h"
#include "Templates/SubclassOf.h"
#include "META_Weapon.generated.h"

class UMETA_WeaponInventoryObject;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Weapon : public UMETA_BaseObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AdditionalPercentageOfWeaponPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AdditionalPercentageOfWeaponPriceFromMods;
    
public:
    UMETA_Weapon();

    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inNewPrice);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfo(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPriceFromMods(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPrice(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSignatureWeapon(bool& outSignature, EIGS_CharacterID& outSignatureCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeleeWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_WeaponTableRow GetWeaponTableRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WeaponSubtype GetWeaponSubtype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MeleeWeaponTableRow GetMeleeWeaponTableRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_InventorySlot GetInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_WeaponInventoryObject> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasePrice() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAdditionalPercentageOfWeaponPriceFromMods();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdditionalPercentageOfWeaponPrice() const;
    
};

