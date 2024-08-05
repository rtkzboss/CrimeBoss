#include "IGS_TutorialPage.h"

FIGS_TutorialPage::FIGS_TutorialPage() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Text = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
    (*this).Video = nullptr;
}

