#include "IGS_AISpawner.h"
#include "IGS_AISpawnerData.h"

UIGS_AISpawner::UIGS_AISpawner() {
    static ConstructorHelpers::FObjectFinder<UIGS_AISpawnerData> gen571(TEXT("/Game/00_Main/Core/AI/Spawning/DA_AISpawnerData.DA_AISpawnerData"));
    (*this).AISpawnerData = gen571.Object;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).NoneSpawnAnimTag, 0)) = TEXT("Anim.Spawn.None");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).StoryMissionTag, 0)) = TEXT("Mission.Story");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnknownMissionTag, 0)) = TEXT("Mission.Unknown");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).NoSpecialTierTag, 0)) = TEXT("Point.Spawn.Init.Disallow.Tier.Special");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ForceSpecialTierTag, 0)) = TEXT("Point.Spawn.Init.Force.Tier.Special");
}

void UIGS_AISpawner::SpawnUnitFromBlueprint(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization, FTransform InTransform, int32 inCount, EIGS_SpawnAnimType inSpawnAnim) {
}


