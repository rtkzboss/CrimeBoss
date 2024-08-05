#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "IGS_GameplayTagAssetInterfaceCustom.generated.h"

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UIGS_GameplayTagAssetInterfaceCustom : public UGameplayTagAssetInterface {
    GENERATED_BODY()
};

class IIGS_GameplayTagAssetInterfaceCustom : public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
};

