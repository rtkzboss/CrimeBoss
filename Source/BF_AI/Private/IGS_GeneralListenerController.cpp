#include "IGS_GeneralListenerController.h"
#include "Perception/AIPerceptionComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_GeneralListenerController::AIGS_GeneralListenerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
}

void AIGS_GeneralListenerController::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}


