#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_InteractiveActorInterface.generated.h"

class UIGS_InteractionListener;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_InteractiveActorInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_InteractiveActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterToInteraction(UIGS_InteractionListener* inListener);
    
};

