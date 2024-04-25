#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_HasWeakSpotInterface.generated.h"

class UIGS_WeakSpotComponent;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_HasWeakSpotInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKBASE_API IIGS_HasWeakSpotInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_WeakSpotComponent* GetWeakSpotComponent();
    
};

