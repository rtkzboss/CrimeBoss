#include "IGS_AIEventsDispatcher.h"

UIGS_AIEventsDispatcher::UIGS_AIEventsDispatcher() {
}

void UIGS_AIEventsDispatcher::SendHeisterEventNotification(const UObject* inWCO, EIGS_HeistersEventNotificationType inType, const FIGS_CharacterEventNotificationData& inNotificationData) {
}

void UIGS_AIEventsDispatcher::SendAIEventNotificationToWholeSquad(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AIEventsDispatcher::SendAIEventNotificationSimple(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AIEventsDispatcher::SendAIEventNotificationRandomMember(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_SquadFramework* inSquad, AActor* inObjectOfInterest) {
}

void UIGS_AIEventsDispatcher::SendAIEventNotificationForSquad(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator, TArray<AIGS_GameCharacterFramework*> inSquadMembers) {
}

void UIGS_AIEventsDispatcher::SendAIEventNotification(const UObject* inWCO, EIGS_AIEventNotificationType inType, const FIGS_CharacterEventNotificationData& inNotificationData) {
}


