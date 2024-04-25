#include "IGS_WidgetButton.h"

UIGS_WidgetButton::UIGS_WidgetButton() {
    this->ButtonImage = NULL;
    this->ButtonText = NULL;
    this->ButtonBorder = NULL;
    this->ButtonFlag = NULL;
    this->ButtonFlagSizeBox = NULL;
    this->Justification = ETextJustify::Left;
    this->bDisableAutomaticTextColorHandling = false;
    this->bDisableAutomaticImageColorHandling = false;
    this->BorderWidth = 4.00f;
    this->bDisableAutomaticBorderColorHandling = false;
    this->FlagVisible = false;
    this->FlagSize = 8.00f;
    this->SimulatedButton = false;
    this->HasImage = false;
    this->HasText = false;
    this->HasBorder = false;
    this->CanHaveFlag = false;
}


