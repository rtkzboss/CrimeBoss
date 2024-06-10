#include "IGS_ModalWindowSettings.h"

UIGS_ModalWindowSettings::UIGS_ModalWindowSettings() {
    static ConstructorHelpers::FObjectFinder<UClass> gen647(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_BasicModalWindow.UMG_BasicModalWindow_C"));
    (*this).DefaultBasicModalScreenClass = gen647.Object;
    static ConstructorHelpers::FObjectFinder<UClass> gen648(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_AdvancedModalWindow.UMG_AdvancedModalWindow_C"));
    (*this).DefaultAdvancedModalScreenClass = gen648.Object;
}


