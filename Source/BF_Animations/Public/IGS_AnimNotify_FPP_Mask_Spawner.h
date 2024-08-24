#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "IGS_AnimNotify_FPP_Mask_Spawner.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_FPP_Mask_Spawner : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MaskActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskAttachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MaskEquipMontage;
    
    UIGS_AnimNotify_FPP_Mask_Spawner();

};

