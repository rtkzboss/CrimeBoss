#include "AkIOSInitializationSettings.h"
#include "EAkChannelConfigType.h"
#include "EAkPanningRule.h"

UAkIOSInitializationSettings::UAkIOSInitializationSettings() {
    (*this).CommonSettings.SampleRate = 48000;
    (*this).CommonSettings.MaximumNumberOfMemoryPools = 256;
    (*this).CommonSettings.MaximumNumberOfPositioningPaths = 255;
    (*this).CommonSettings.CommandQueueSize = 262144;
    (*this).CommonSettings.SamplesPerFrame = 1024;
    (*this).CommonSettings.MainOutputSettings.PanningRule = EAkPanningRule::Headphones;
    (*this).CommonSettings.MainOutputSettings.ChannelConfigType = EAkChannelConfigType::Standard;
    (*this).CommonSettings.MainOutputSettings.ChannelMask = 3;
    (*this).CommonSettings.StreamingLookAheadRatio = 1.000000000e+00f;
    (*this).CommonSettings.NumberOfRefillsInVoice = 4;
}


