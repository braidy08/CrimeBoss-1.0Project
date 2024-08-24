#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterTableRow.h"
#include "CommonCharacterIDHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UCommonCharacterIDHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommonCharacterIDHelpers();

    UFUNCTION(BlueprintCallable)
    static bool IsValidUniqueCharacterID(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidUniqueCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidGenericCharacterID(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidGenericCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidCharacterID(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidBossCharacterID(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidBossCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_CharacterTableRow> GetValidUniqueCharactersData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_CharacterID> GetValidUniqueCharacters(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_CharacterTableRow> GetValidGenericCharactersData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_CharacterID> GetValidGenericCharacters(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_CharacterTableRow> GetValidBossCharactersData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_CharacterID> GetValidBossCharacters(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_CharacterID GetRandomUniqueCharacter(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_CharacterID GetRandomGenericCharacter(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_CharacterID GetRandomCharacter(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_CharacterID GetRandomBossCharacter(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_CharacterTableRow> GetAllValidCharactersData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_CharacterID> GetAllValidCharacters(const UObject* inWCO);
    
};

