#include "IGS_ModalWindowSettings.h"

UIGS_ModalWindowSettings::UIGS_ModalWindowSettings() {
    static ConstructorHelpers::FObjectFinder<UClass> gen0(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_BasicModalWindow.UMG_BasicModalWindow_C"));
    (*this).DefaultBasicModalScreenClass = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UClass> gen1(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_AdvancedModalWindow.UMG_AdvancedModalWindow_C"));
    (*this).DefaultAdvancedModalScreenClass = gen1.Object;
}


