#include "IGS_WaveManager.h"
#include "Net/UnrealNetwork.h"

UIGS_WaveManager::UIGS_WaveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPhase = EIGS_PressurePhase::PP_Unknown;
    this->CurrentTactic = EIGS_StormTacticType::STT_None;
    this->NextPhaseTime = 0.00f;
    this->AssaultEndingSoonTime = 0.00f;
    this->AssaultDurationAddon = 0.00f;
    this->InitControlCheckTime = -1.00f;
    this->NextWaveTime = 0.00f;
    this->WaveDelay = 0.00f;
    this->WaveTimeAddon = 0.00f;
    this->WaveTimeCoefAddon = 0.00f;
    this->LastTeamSideEnum = EIGS_TeamSideEnum::TS_Unknown;
    this->IsAssaultEndingSoon = false;
    this->CurrentWaveNumber = 0;
    this->CurrentSquadNumber = 0;
    this->SpawnedTotal = 0;
    this->AliveTotal = 0;
    this->DeadTotal = 0;
    this->SpawnedInWave = 0;
    this->AliveInWave = 0;
    this->DeadInWave = 0;
    this->HeistersTotal = 0;
    this->DeadHeistersTotal = 0;
    this->CarsTotal = 0;
    this->CarsOverall = 0;
    this->StormIntensity = 0;
    this->IsGangsterOnly = false;
}

void UIGS_WaveManager::SetUpWaveManagerWavesDirections(int32 inWavesDirections) {
}

void UIGS_WaveManager::SetUpWaveManagerSegment(int32 inStormTypes, int32 inMaxEnemyCount, float inStormLength, float inBreakLength, const TArray<FGameplayTagContainer>& inPointsGameplayTags, const TMap<EIGS_UnitSpecialization, int32>& inSpecialTypesMaxCount) {
}

void UIGS_WaveManager::SetStormIntensity(const UObject* inWCO, int32 inIntensity) {
}

void UIGS_WaveManager::OnRep_StormIntensity() const {
}

void UIGS_WaveManager::OnRep_CurrentPhase() const {
}

void UIGS_WaveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_WaveManager, CurrentPhase);
    DOREPLIFETIME(UIGS_WaveManager, StormIntensity);
    DOREPLIFETIME(UIGS_WaveManager, IsGangsterOnly);
}


