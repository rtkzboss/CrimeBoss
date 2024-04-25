#include "IGS_RichTextBlockDecoratorBase.h"

UIGS_RichTextBlockDecoratorBase::UIGS_RichTextBlockDecoratorBase() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->InputActionMapAsset = NULL;
    this->InputKeyIconMap = NULL;
    this->SupportedInputDevice = EIGS_InputDevice::ID_UNKNOWN;
    this->WidgetToSpawn = NULL;
    this->bGamepadDecorator = true;
}


