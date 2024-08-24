#include "BTTask_Ziptie.h"

UBTTask_Ziptie::UBTTask_Ziptie() {
    this->NodeName = TEXT("Ziptie");
    this->DistanceToMove = 150.00f;
    this->DistanceToStop = 50.00f;
    this->Character = NULL;
    this->CivToZiptie = NULL;
    this->ZiptieComponent = NULL;
}


