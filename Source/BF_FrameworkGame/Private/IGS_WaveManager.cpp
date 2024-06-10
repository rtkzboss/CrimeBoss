#include "IGS_WaveManager.h"
#include "ComponentInstanceDataCache.h"
#include "IGS_WaveManagerData.h"
#include "Net/UnrealNetwork.h"

UIGS_WaveManager::UIGS_WaveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UIGS_WaveManagerData> gen0(TEXT("/Game/00_Main/Core/GameModes/DA_WaveManagerData.DA_WaveManagerData"));
    (*this).WaveManagerData = gen0.Object;
    (*this).CurrentPhase = EIGS_PressurePhase::PP_Unknown;
    (*this).InitControlCheckTime = -1.000000000e+00f;
    (*this).LastTeamSideEnum = EIGS_TeamSideEnum::TS_Unknown;
    (*this).PrimaryComponentTick.bCanEverTick = true;
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


