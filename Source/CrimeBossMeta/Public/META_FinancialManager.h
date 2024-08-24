#pragma once
#include "CoreMinimal.h"
#include "META_Loan.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "META_FinancialManager.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_FinancialManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_FinancialManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsPlayerInBankruptState(bool& outResult, int32& outDaysLeftForRehabilitation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLoanActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTradeIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForDefense(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForAttackNeutral(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForAttack(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_Loan> GetProvidedLoans();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMissionIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMarketSpending();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLootNextDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLootDailyBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHiredCrewSpending();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExpenses();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDayBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentCooldownBetweenLoans();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCrewUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCashNextDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCashDailyBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetArmyUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAllPlayerTilesIncome(int32& outCashValue, TMap<FGameplayTag, int32>& outLoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetActiveLoan(FMETA_Loan& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLoanBeTaken();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActivateLoan(FMETA_Loan inLoan);
    
};

