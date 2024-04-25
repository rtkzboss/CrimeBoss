#include "IGS_RoomBase.h"
#include "Components/SceneComponent.h"

AIGS_RoomBase::AIGS_RoomBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bGatherNeighborRooms = false;
    this->bDebugPolyHighlight = false;
    this->VariantNumber = 0;
    this->RoomType = EIGS_RoomType::Lobby;
    this->RoomSecurityType = EIGS_RoomSecurityType::Outside;
    this->OuterTier = EIGS_SecurityTier::Tier0;
    this->OwnerTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->bIsEdgeRoom = false;
    this->UniqueRoom = false;
    this->bGatheredPolys = false;
    this->RoomPolyCount = 0;
}

void AIGS_RoomBase::PlayerTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIGS_RoomBase::PlayerTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_RoomBase::InitializeRoom() {
}

void AIGS_RoomBase::GiveAllRoomVertices(TArray<FVector>& outVertices) {
}

void AIGS_RoomBase::GetPolys(FVector InLocation, FVector Extent) {
}

TArray<AIGS_RoomBase*> AIGS_RoomBase::GetDistantRooms(const FVector inStartPos, float inMinDistance, float inMaxDistance, int32 inMinChokePoints, int32 inMaxChokePoints) const {
    return TArray<AIGS_RoomBase*>();
}

void AIGS_RoomBase::AddEntrance(AActor* inActor) {
}


