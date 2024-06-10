#include "IGS_GeneralListener.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_GeneralListenerController.h"

AIGS_GeneralListener::AIGS_GeneralListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto& gen557 = (*this).SupportedHearingTags;
    gen557.Empty();
    gen557.AddDefaulted(2);
    (*this).bStartsActive = true;
    (*this).AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    (*this).AIControllerClass = AIGS_GeneralListenerController::StaticClass();
    (*this).bReplicates = false;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_None;
}

void AIGS_GeneralListener::SetActive(bool Inactive) {
}

bool AIGS_GeneralListener::IsActive() const {
    return false;
}

AIGS_GeneralListener* AIGS_GeneralListener::GetGeneralListener(const UObject* inWCO) {
    return NULL;
}


