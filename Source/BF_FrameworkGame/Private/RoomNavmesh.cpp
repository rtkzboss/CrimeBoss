#include "RoomNavmesh.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavigationTypes.h"
#include "NavigationData.h"

ARoomNavmesh::ARoomNavmesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*TBaseStructure<FNavDataConfig>::Get()->FindPropertyByName("NavDataClass")->ContainerPtrToValuePtr<TSoftClassPtr<AActor>>(&(*this).NavDataConfig, 0)) = FSoftObjectPath(TEXT("/Script/NavigationSystem.RecastNavMesh"), TEXT(""));
    (*this).bCanBeMainNavData = false;
}


