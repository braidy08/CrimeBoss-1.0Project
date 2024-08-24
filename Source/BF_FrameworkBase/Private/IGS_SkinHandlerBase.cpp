#include "IGS_SkinHandlerBase.h"

UIGS_SkinHandlerBase::UIGS_SkinHandlerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadedSkin = NULL;
    this->SkinnableMesh = NULL;
    this->LowResSkin = NULL;
    this->bOverrideTortillaSetting = false;
    this->bForcedTortilla = false;
}


