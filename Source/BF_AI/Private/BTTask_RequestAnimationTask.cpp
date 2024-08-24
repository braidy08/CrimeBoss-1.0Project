#include "BTTask_RequestAnimationTask.h"

UBTTask_RequestAnimationTask::UBTTask_RequestAnimationTask() {
    this->NodeName = TEXT("Request Animation Task");
    this->bIsBlackBoardBased = false;
    this->bIsAnimationCommand = false;
    this->bHasPlayTime = false;
    this->bCanBeAborted = true;
    this->PlayTime = 0.00f;
}


