#include "IGS_SoundSettings.h"

UIGS_SoundSettings::UIGS_SoundSettings() {
    this->bSettingsValid = true;
    this->MasterVolumeValue = 100.00f;
    this->SFXVolumeValue = 80.00f;
    this->MusicVolumeValue = 100.00f;
    this->DialogueVolumeValue = 80.00f;
    this->bAudioMixSpeakers = false;
    this->bSoundEnabledValue = true;
    this->bSoundInBackgroundEnabledValue = true;
    this->bStreamerModeValue = false;
    this->VoiceChatVolumeValue = 100.00f;
    this->bVoiceChatEnabledValue = false;
}

UIGS_SoundSettings* UIGS_SoundSettings::Instance() {
    return NULL;
}


