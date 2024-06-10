#include "IGS_MainHUD.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_HUDKantanDatasourceHolder.h"

AIGS_MainHUD::AIGS_MainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).KantanDatasourceHolder = CreateDefaultSubobject<UIGS_HUDKantanDatasourceHolder>(TEXT("KantanDatasourceHolder"));
}

void AIGS_MainHUD::ToggleGASDebugSimple() {
}

void AIGS_MainHUD::ToggleGASDebugFull() {
}




void AIGS_MainHUD::SetMostPrioHintType(const EIGS_MostPrioHintType inMostPrioHintType) {
}





