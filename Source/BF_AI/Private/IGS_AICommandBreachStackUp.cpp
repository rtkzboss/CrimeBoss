#include "IGS_AICommandBreachStackUp.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandBreachStackUp::UIGS_AICommandBreachStackUp() {
    this->Type = EIGS_AICommandType::AICT_BreachStackUp;
    this->Brechable = NULL;
    this->Breaching = false;
    this->Crouch = false;
}


