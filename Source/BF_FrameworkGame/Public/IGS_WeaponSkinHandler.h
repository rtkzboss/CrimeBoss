#pragma once
#include "CoreMinimal.h"
#include "IGS_SkinHandlerBase.h"
#include "IGS_WeaponSkinHandler.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponSkinHandler : public UIGS_SkinHandlerBase {
    GENERATED_BODY()
public:
    UIGS_WeaponSkinHandler(const FObjectInitializer& ObjectInitializer);

};

