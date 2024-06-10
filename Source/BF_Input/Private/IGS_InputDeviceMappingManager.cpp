#include "IGS_InputDeviceMappingManager.h"
#include "IGS_InputActionMapDataAsset.h"
#include "IGS_InputDeviceIconsDataAsset.h"

UIGS_InputDeviceMappingManager::UIGS_InputDeviceMappingManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen241(TEXT("/Game/00_Main/Input/InputTables/DA_PS5_InputKeyIcons.DA_PS5_InputKeyIcons"));
    (*this).PS5InputDeviceIconDataAsset = gen241.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen242(TEXT("/Game/00_Main/Input/InputTables/DA_XBSX_InputKeyIcons.DA_XBSX_InputKeyIcons"));
    (*this).XBOXInputDeviceIconDataAsset = gen242.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen243(TEXT("/Game/00_Main/Input/InputTables/DA_SteamDeck_InputKeyIcons.DA_SteamDeck_InputKeyIcons"));
    (*this).SteamDeckInputDeviceIconDataAsset = gen243.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen244(TEXT("/Game/00_Main/Input/InputTables/DA_PC_InputKeyIcons.DA_PC_InputKeyIcons"));
    (*this).PCInputDeviceIconDataAsset = gen244.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputActionMapDataAsset> gen245(TEXT("/Game/00_Main/Input/InputTables/DA_InputActionMap.DA_InputActionMap"));
    (*this).InputActionMapDataAsset = gen245.Object;
}

void UIGS_InputDeviceMappingManager::GetInputActionSymbolBP(FKey inKey, EIGS_InputDevice inInputDevice, FName& outSymbol) {
}


