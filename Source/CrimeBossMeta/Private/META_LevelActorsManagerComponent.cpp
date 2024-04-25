#include "META_LevelActorsManagerComponent.h"

UMETA_LevelActorsManagerComponent::UMETA_LevelActorsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMETA_LevelActorsManagerComponent::UnRegister_Implementation(FGameplayTag inTag, UObject* inObject) {
    return false;
}

bool UMETA_LevelActorsManagerComponent::SwitchToCamera_Implementation(FGameplayTag inTag) {
    return false;
}

bool UMETA_LevelActorsManagerComponent::Register_Implementation(FGameplayTag inTag, UObject* inObject) {
    return false;
}

UObject* UMETA_LevelActorsManagerComponent::GetRandom(FGameplayTag inTag) {
    return NULL;
}

UObject* UMETA_LevelActorsManagerComponent::GetFirst(FGameplayTag inTag) {
    return NULL;
}

TArray<UObject*> UMETA_LevelActorsManagerComponent::GetAllWithChildren(FGameplayTag inTag) {
    return TArray<UObject*>();
}

TArray<UObject*> UMETA_LevelActorsManagerComponent::GetAll(FGameplayTag inTag) {
    return TArray<UObject*>();
}

void UMETA_LevelActorsManagerComponent::Clear() {
}


