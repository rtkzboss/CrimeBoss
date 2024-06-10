#include "IGS_TutorialsSettings.h"

UIGS_TutorialsSettings::UIGS_TutorialsSettings() {
    (*this).TutorialsSystemEnabled = true;
    static ConstructorHelpers::FObjectFinder<UClass> gen649(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_TutorialWindow.UMG_TutorialWindow_C"));
    (*this).DefaultTutorialScreenClass = gen649.Object;
    static ConstructorHelpers::FObjectFinder<UClass> gen650(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_BinkTutorialWindow.UMG_BinkTutorialWindow_C"));
    (*this).DefaultVideoTutorialScreenClass = gen650.Object;
}


