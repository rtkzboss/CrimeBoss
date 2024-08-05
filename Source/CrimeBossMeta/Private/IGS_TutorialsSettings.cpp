#include "IGS_TutorialsSettings.h"

UIGS_TutorialsSettings::UIGS_TutorialsSettings() {
    (*this).TutorialsSystemEnabled = true;
    static ConstructorHelpers::FObjectFinder<UClass> gen0(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_TutorialWindow.UMG_TutorialWindow_C"));
    (*this).DefaultTutorialScreenClass = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UClass> gen1(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_BinkTutorialWindow.UMG_BinkTutorialWindow_C"));
    (*this).DefaultVideoTutorialScreenClass = gen1.Object;
}


