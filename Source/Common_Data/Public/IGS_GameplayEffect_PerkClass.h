#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "IGS_GameplayEffect_PerkClass.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_GameplayEffect_PerkClass : public UIGS_GameplayEffect_PerkBase {
    GENERATED_BODY()
public:
    UIGS_GameplayEffect_PerkClass();

};

