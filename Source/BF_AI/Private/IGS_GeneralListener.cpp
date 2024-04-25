#include "IGS_GeneralListener.h"
#include "Engine/EngineTypes.h"
#include "IGS_GeneralListenerController.h"

AIGS_GeneralListener::AIGS_GeneralListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AIGS_GeneralListenerController::StaticClass();
    this->SupportedHearingTags.AddDefaulted(2);
    this->bStartsActive = true;
}

void AIGS_GeneralListener::SetActive(bool Inactive) {
}

bool AIGS_GeneralListener::IsActive() const {
    return false;
}

AIGS_GeneralListener* AIGS_GeneralListener::GetGeneralListener(const UObject* inWCO) {
    return NULL;
}


