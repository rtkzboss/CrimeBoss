#include "StreamlineFeatureRequirements.h"

FStreamlineFeatureRequirements::FStreamlineFeatureRequirements() {
    (*this).Support = UStreamlineFeatureSupport::NotSupportedByPlatformAtBuildTime;
    (*this).Requirements = UStreamlineFeatureRequirementsFlags::None;
    (*this).RequiredOperatingSystemVersion.Major = 0;
    (*this).RequiredOperatingSystemVersion.Minor = 0;
    (*this).RequiredOperatingSystemVersion.Build = 0;
    (*this).DetectedOperatingSystemVersion.Major = 0;
    (*this).DetectedOperatingSystemVersion.Minor = 0;
    (*this).DetectedOperatingSystemVersion.Build = 0;
    (*this).RequiredDriverVersion.Major = 0;
    (*this).RequiredDriverVersion.Minor = 0;
    (*this).RequiredDriverVersion.Build = 0;
    (*this).DetectedDriverVersion.Major = 0;
    (*this).DetectedDriverVersion.Minor = 0;
    (*this).DetectedDriverVersion.Build = 0;
}

