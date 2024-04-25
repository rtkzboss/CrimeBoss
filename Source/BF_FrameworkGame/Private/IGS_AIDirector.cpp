#include "IGS_AIDirector.h"
#include "IGS_AIDifficultyManager.h"
#include "IGS_AIEventsDispatcher.h"
#include "IGS_AIPointManager.h"
#include "IGS_AISpawner.h"
#include "IGS_AmbientLifeManager.h"
#include "IGS_DefendManager.h"
#include "IGS_DetectionManager.h"
#include "IGS_MountedWeaponManager.h"
#include "IGS_PressureManager.h"
#include "IGS_TrafficManager.h"

UIGS_AIDirector::UIGS_AIDirector() {
    this->m_WaveManager = NULL;
    this->m_AISpawner = CreateDefaultSubobject<UIGS_AISpawner>(TEXT("AI Spawner"));
    this->m_PressureManager = CreateDefaultSubobject<UIGS_PressureManager>(TEXT("Pressure Manager"));
    this->m_AIEventsDispatcher = CreateDefaultSubobject<UIGS_AIEventsDispatcher>(TEXT("AI Event Dispatcher"));
    this->m_AmbientLifeManager = CreateDefaultSubobject<UIGS_AmbientLifeManager>(TEXT("Ambient Life Manager"));
    this->m_DefendManager = CreateDefaultSubobject<UIGS_DefendManager>(TEXT("Defend Manager"));
    this->m_DetectionManager = CreateDefaultSubobject<UIGS_DetectionManager>(TEXT("Detection Manager"));
    this->m_MountedWeaponManager = CreateDefaultSubobject<UIGS_MountedWeaponManager>(TEXT("Mounted Weapon Manager"));
    this->m_AIPointsManager = CreateDefaultSubobject<UIGS_AIPointManager>(TEXT("AIPoint Manager"));
    this->m_TrafficManager = CreateDefaultSubobject<UIGS_TrafficManager>(TEXT("Traffic Manager"));
    this->m_AIDifficultyManager = CreateDefaultSubobject<UIGS_AIDifficultyManager>(TEXT("AI Difficulty Manager"));
    this->m_GeneralListener = NULL;
    this->MatchStartedForAI = false;
}

void UIGS_AIDirector::SetGlobalAggro(AActor* inActor, float InFloat, const AActor* inInstigator) {
}

void UIGS_AIDirector::RemoveGlobalAggroEntry(AActor* inActor) {
}

UIGS_WaveManager* UIGS_AIDirector::GetWaveManager() {
    return NULL;
}

UIGS_TrafficManager* UIGS_AIDirector::GetTrafficManager() const {
    return NULL;
}

UIGS_PressureManager* UIGS_AIDirector::GetPressureManager() const {
    return NULL;
}

UIGS_MountedWeaponManager* UIGS_AIDirector::GetMountedWeaponManager() const {
    return NULL;
}

float UIGS_AIDirector::GetGlobalAggro(const AActor* inActor, const AActor* inInstigator) const {
    return 0.0f;
}

UIGS_DetectionManager* UIGS_AIDirector::GetDetectionManager() const {
    return NULL;
}

UIGS_DefendManager* UIGS_AIDirector::GetDefendManager() const {
    return NULL;
}

AIGS_ControlRoomBase* UIGS_AIDirector::GetControlRoomForSquad(int32 inSquadID) {
    return NULL;
}

UIGS_GuardControlRoomComponentBase* UIGS_AIDirector::GetControlRoomComponentForSquad(int32 inSquadID) {
    return NULL;
}

UIGS_AmbientLifeManager* UIGS_AIDirector::GetAmbientLifeManager() const {
    return NULL;
}

UIGS_AISpawner* UIGS_AIDirector::GetAISpawner() const {
    return NULL;
}

UIGS_AIPointManager* UIGS_AIDirector::GetAIPointsManager() const {
    return NULL;
}

UIGS_AIEventsDispatcher* UIGS_AIDirector::GetAIEventsDispatcher() const {
    return NULL;
}

UIGS_AIDifficultyManager* UIGS_AIDirector::GetAIDifficultyManager() const {
    return NULL;
}


