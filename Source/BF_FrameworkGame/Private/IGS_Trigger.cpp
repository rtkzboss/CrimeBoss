#include "IGS_Trigger.h"
#include "PhysicsEngine/BodyInstance.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EIGS_BoxSphereShape.h"

AIGS_Trigger::AIGS_Trigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TriggerOnBotRepossess = true;
    (*this).bNotifyLeftOnDeath = true;
    (*this).bUseTriggerDebugOptions = true;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName")->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Trigger");
    (*this).Color.B = 0;
    (*this).Color.G = 128;
    (*this).Color.R = 255;
}

void AIGS_Trigger::ResetCount() {
}

void AIGS_Trigger::OnActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason) {
}

void AIGS_Trigger::Multicast_OnPossessed_Implementation(AIGS_GameCharacterFramework* inPlayerCharacter) {
}
bool AIGS_Trigger::Multicast_OnPossessed_Validate(AIGS_GameCharacterFramework* inPlayerCharacter) {
    return true;
}

bool AIGS_Trigger::IsActorInTrigger(AActor* inActor) const {
    return false;
}

TArray<AIGS_PlayerCharacter*> AIGS_Trigger::GetAllPlayersInTrigger() const {
    return TArray<AIGS_PlayerCharacter*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_Trigger::GetAllCharactersInTrigger() const {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AActor*> AIGS_Trigger::GetAllActorsInTrigger() const {
    return TArray<AActor*>();
}

void AIGS_Trigger::Execute_Implementation(AActor* inExecutingActor) {
}


int32 AIGS_Trigger::CheckAllCharactersInTrigger() {
    return 0;
}


