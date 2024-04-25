#include "IGS_ScriptingThrowThrowable.h"
#include "Templates/SubclassOf.h"

UIGS_ScriptingThrowThrowable::UIGS_ScriptingThrowThrowable() {
    this->m_Throwable = NULL;
}

UIGS_ScriptingThrowThrowable* UIGS_ScriptingThrowThrowable::ScriptingCommandThrowThrowable(AIGS_GameCharacterFramework* inCharacter, FIGS_InterestPointHolder inTarget, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable) {
    return NULL;
}

void UIGS_ScriptingThrowThrowable::OnCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed) {
}


