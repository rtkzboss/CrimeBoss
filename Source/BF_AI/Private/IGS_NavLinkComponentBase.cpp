#include "IGS_NavLinkComponentBase.h"
#include "NavAreaRoomBase.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "NavAreas/NavArea_Null.h"
#include "Templates/SubclassOf.h"

UIGS_NavLinkComponentBase::UIGS_NavLinkComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).FirstUseValidInCalmState = true;
    (*this).FirstUseValidInAlertedState = true;
    (*this).FirstUseValidInCombatState = true;
    (*this).ValidInCalmState = true;
    (*this).ValidInAlertedState = true;
    (*this).ValidInCombatState = true;
    (*this).Left.X = -1.000000000e+02f;
    (*this).Right.X = 1.000000000e+02f;
    (*this).m_AttachToOwnersRoot = true;
    (*this).WaitCooldown = -1.000000000e+00f;
    (*this).EnabledAreaClass = UNavAreaRoomBase::StaticClass();
    (*this).DisabledAreaClass = UNavArea_Null::StaticClass();
    (*this).LinkEnabled = true;
    (*this).bCanEverAffectNavigation = true;
}

void UIGS_NavLinkComponentBase::SetRightPoint(FVector rightPoint) {
}

void UIGS_NavLinkComponentBase::SetNavigationRelevancy(bool inRelevant) {
}

void UIGS_NavLinkComponentBase::SetLeftPoint(FVector leftPoint) {
}

void UIGS_NavLinkComponentBase::SetEnabledArea(TSubclassOf<UNavArea> inAreaClass) {
}

void UIGS_NavLinkComponentBase::SetDisabledArea(TSubclassOf<UNavArea> inAreaClass) {
}

void UIGS_NavLinkComponentBase::SetCostMultiplier(float Multiplier) {
}

void UIGS_NavLinkComponentBase::FinalizeFirstUsage() {
}


