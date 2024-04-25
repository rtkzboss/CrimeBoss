#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactParameters.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_HitEffectHandlerInterface.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ImpactManager;
class UIGS_ImpactTypeObject;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_HitEffectHandlerInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_HitEffectHandlerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateShotImpactEffect(FIGS_ImpactParameters inParameters, const AIGS_GameCharacterFramework* inInstigatorCharacter, UIGS_ImpactManager* inImpactManager, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult& inHitResult);
    
};

