#include "IGS_NavLinkComponentBase.h"
#include "NavAreaRoomBase.h"
#include "NavAreas/NavArea_Null.h"
#include "Templates/SubclassOf.h"

UIGS_NavLinkComponentBase::UIGS_NavLinkComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->HaveFirstUse = false;
    this->FirstUseValidInCalmState = true;
    this->FirstUseValidInAlertedState = true;
    this->FirstUseValidInCombatState = true;
    this->FirstUseLinkDirection = ENavLinkDirection::BothWays;
    this->OnlyRobots = false;
    this->NeverRobots = false;
    this->ValidInCalmState = true;
    this->ValidInAlertedState = true;
    this->ValidInCombatState = true;
    this->LinkDirection = ENavLinkDirection::BothWays;
    this->m_AttachToOwnersRoot = true;
    this->m_CachedNavParent = NULL;
    this->m_NavLinkUserId = 0;
    this->Cooldown = 0.00f;
    this->WaitCooldown = -1.00f;
    this->EnabledAreaClass = UNavAreaRoomBase::StaticClass();
    this->DisabledAreaClass = UNavArea_Null::StaticClass();
    this->m_BestWaitingAgent = NULL;
    this->LinkEnabled = true;
    this->m_FirstUsageFinished = false;
    this->m_Initialized = false;
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


