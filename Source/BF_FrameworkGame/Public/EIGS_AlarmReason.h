#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_AlarmReason : uint8 {
    Alarm_UNKNOWN = 255,
    Alarm_CalledByScript = 0,
    Alarm_FailedToCheckInHeartbeat,
    Alarm_GunshotsReported,
    Alarm_SuspiciousActivityReported,
    Alarm_GuardRaisedAlarm,
    Alarm_SilentAlarmRaised,
    Alarm_MotionDetectorTriggered,
    Alarm_AllGuardsAreDead,
    Alarm_AlarmButton,
    Alarm_Telephone,
    Alarm_CalledByScriptNoDialogue,
    Alarm_CameraCausedAlarm,
    Alarm_DoomTimerRanOut,
    Alarm_DisarmedTelephone,
    Alarm_LastStrikeAdded,
};

