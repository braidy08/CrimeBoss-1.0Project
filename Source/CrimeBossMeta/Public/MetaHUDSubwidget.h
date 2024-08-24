#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "MetaHUDSubwidget.generated.h"

class IMETA_BlackmarketManager;
class UMETA_BlackmarketManager;
class IMETA_CrewManager;
class UMETA_CrewManager;
class IMETA_DailyManager;
class UMETA_DailyManager;
class IMETA_FinancialManager;
class UMETA_FinancialManager;
class IMETA_GoalsManager;
class UMETA_GoalsManager;
class IMETA_JobsManager;
class UMETA_JobsManager;
class IMETA_StashManager;
class UMETA_StashManager;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMetaHUDSubwidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_CrewManager> CrewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_BlackmarketManager> BlackmarketManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_FinancialManager> FinanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_GoalsManager> GoalsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_JobsManager> JobsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_StashManager> StashManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_DailyManager> DailyManager;
    
    UMetaHUDSubwidget();

};

