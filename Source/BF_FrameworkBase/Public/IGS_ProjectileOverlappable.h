#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_ProjectileOverlappable.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_ProjectileOverlappable : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKBASE_API IIGS_ProjectileOverlappable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProjectileOverlap(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EIGS_OverlapResponseType GetOverlapResponseType();
    
};

