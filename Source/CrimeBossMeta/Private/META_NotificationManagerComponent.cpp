#include "META_NotificationManagerComponent.h"
#include "ComponentInstanceDataCache.h"

UMETA_NotificationManagerComponent::UMETA_NotificationManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

bool UMETA_NotificationManagerComponent::IsNotificationInQueue(TSoftObjectPtr<UMETA_NotificationID> inID) {
    return false;
}

void UMETA_NotificationManagerComponent::AddNotification_Implementation(UMETA_BaseNotification* inNotification) {
}


