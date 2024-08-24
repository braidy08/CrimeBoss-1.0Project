#include "IGS_VehicleBoat.h"
#include "IGS_AIBoatSpawnComponent.h"
#include "BuoyancyComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleBoat::AIGS_VehicleBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseCustomDestination = false;
    this->bStartParking = false;
    this->StartNavAreaClass = NULL;
    this->Buoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    this->VehicleCollisionBox = NULL;
    this->AIBoatSpawnerComponent = CreateDefaultSubobject<UIGS_AIBoatSpawnComponent>(TEXT("AIBoatSpawnerComponent"));
    this->bPassengersGetOutAfterDriveFinished = true;
    this->bCheckForCollision = false;
    this->TimeToStop = 5.00f;
    this->mR_bDrivingOnServer = false;
    this->mR_bArrivedAtDestination = false;
    this->defaultSpeed = 0.00f;
    this->followDistance = 1000.00f;
    this->rotationSlowFactor = 100.00f;
    this->waveSlowFactor = 120.00f;
    this->RotationSpeed = 10.00f;
    this->EscapeDriveSpeed = 1000.00f;
    this->NavModifier = NULL;
    this->bUseGravity = true;
    this->isEscaping = false;
}

void AIGS_VehicleBoat::StartDrive_BP(TArray<UIGS_TrafficPathComponent*> inPath) {
}

void AIGS_VehicleBoat::SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const {
}

void AIGS_VehicleBoat::SetCustomDestination_Implementation(FVector InLocation, FRotator InRotation) {
}

void AIGS_VehicleBoat::ParkBoat() {
}

void AIGS_VehicleBoat::GetBuoyancyWaterStatus(int32 Index, bool& outInWater) {
}

void AIGS_VehicleBoat::GetBuoyancyData(FBuoyancyData& outBuoyancyData) {
}

void AIGS_VehicleBoat::ChangeBoatSpeed(float newSpeed) {
}

void AIGS_VehicleBoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleBoat, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_TargetRotation);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_NewTargetParkingLocation);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_bDrivingOnServer);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_bArrivedAtDestination);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_ParkPosition);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_ParkRotation);
    DOREPLIFETIME(AIGS_VehicleBoat, isEscaping);
}


