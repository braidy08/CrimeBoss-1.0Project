#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueUniCharacter.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueUniCharacter : uint8 {
    None,
    GenericHarmless = 40,
    CivilianM,
    CivilianF,
    EmployeeM,
    EmployeeF,
    GenericHarmful = 80,
    Guard1,
    Cop1,
    GangsterGraves,
    GangsterChickos,
    GangsterSickos,
    GangsterScudos,
    GangsterRiders,
    Cop2,
    GenericNPC = 99,
    StoryCharacter2D,
    StoryCharacter3D,
    StoryCharacter2DRadio,
    NoVoice = 255,
    Character2DMin = 1,
    Character2DMax = StoryCharacter2DRadio,
    Character3DMin = 30,
    Character3DMax = 111,
    HarmlessMin = GenericHarmless,
    HarmlessMax = EmployeeF,
    HarmfulMin = GenericHarmful,
    HarmfulMax = Cop2,
};

