#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_PingableInterface.generated.h"

class UIGS_PingableComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UIGS_PingableInterface : public UInterface {
    GENERATED_BODY()
};

class IIGS_PingableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_PingableComponent* GetPingableComponent();
    
};

