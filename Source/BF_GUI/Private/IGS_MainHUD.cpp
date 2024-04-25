#include "IGS_MainHUD.h"
#include "IGS_HUDKantanDatasourceHolder.h"

AIGS_MainHUD::AIGS_MainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->KantanDatasourceHolder = CreateDefaultSubobject<UIGS_HUDKantanDatasourceHolder>(TEXT("KantanDatasourceHolder"));
    this->MainHUDWidget = NULL;
    this->CurrMostPrioHintType = EIGS_MostPrioHintType::None;
}

void AIGS_MainHUD::ToggleGASDebugSimple() {
}

void AIGS_MainHUD::ToggleGASDebugFull() {
}




void AIGS_MainHUD::SetMostPrioHintType(const EIGS_MostPrioHintType inMostPrioHintType) {
}





