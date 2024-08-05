#include "IGS_AIControllerGame.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIInitialSpawnDataComponent.h"
#include "IGS_AreaOfOperationsComponent.h"
#include "IGS_BehaviorTreeGameComponent.h"
#include "IGS_BlackboardGameComponent.h"
#include "IGS_ComplexPathFollowingComponent.h"
#include "IGS_NavLinkHandlerComponent.h"

AIGS_AIControllerGame::AIGS_AIControllerGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_ComplexPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    (*this).MaxCornerOffset = 6.000000000e+01f;
    (*this).BlackboardGameComponent = CreateDefaultSubobject<UIGS_BlackboardGameComponent>(TEXT("BlackboardGameComponent"));
    (*this).BehaviorTreeGameComponent = CreateDefaultSubobject<UIGS_BehaviorTreeGameComponent>(TEXT("BehaviorTreeGameComponent"));
    (*this).AreaOfOperationsComponent = CreateDefaultSubobject<UIGS_AreaOfOperationsComponent>(TEXT("AreaOf Operations Component"));
    (*this).NavLinkHandlerComponent = CreateDefaultSubobject<UIGS_NavLinkHandlerComponent>(TEXT("NavLink Handler Component"));
    (*this).InitialSpawnDataComponent = CreateDefaultSubobject<UIGS_AIInitialSpawnDataComponent>(TEXT("Initial Spawn Data Component"));
}

void AIGS_AIControllerGame::SetScriptingPostponed(bool InValue) {
}

void AIGS_AIControllerGame::SetCornerOffset(float Value) {
}

void AIGS_AIControllerGame::ReportReload(bool inIsCombat, bool isEmptyMagazine) {
}

void AIGS_AIControllerGame::RandomizedReladAmmoUsed() {
}

void AIGS_AIControllerGame::OnStartedPlayingMatch() {
}

bool AIGS_AIControllerGame::IsSOScopeValid() {
    return false;
}

bool AIGS_AIControllerGame::IsScriptingPosponed() const {
    return false;
}

int32 AIGS_AIControllerGame::GetReloadRequireAmmoUsed() const {
    return 0;
}

UIGS_AISuspiciousnessComponentBase* AIGS_AIControllerGame::GetOptionalAISuspiciousnessComponent() const {
    return NULL;
}

UIGS_AIDetectionComponent* AIGS_AIControllerGame::GetOptionalAIDetectionComponent() const {
    return NULL;
}

UIGS_NavLinkHandlerComponent* AIGS_AIControllerGame::GetNavlinkHandlerComponent() const {
    return NULL;
}

float AIGS_AIControllerGame::GetCornerOffsetMin() const {
    return 0.0f;
}

float AIGS_AIControllerGame::GetCornerOffsetMax() const {
    return 0.0f;
}

float AIGS_AIControllerGame::GetCombatRangePrefered() const {
    return 0.0f;
}

int32 AIGS_AIControllerGame::GetAmmoUsedSinceLastReload() const {
    return 0;
}

void AIGS_AIControllerGame::ForceLeaveWaypoint() {
}


