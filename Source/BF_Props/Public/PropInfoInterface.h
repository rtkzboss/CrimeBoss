#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PropInfoStruct.h"
#include "PropInfoInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPropInfoInterface : public UInterface {
    GENERATED_BODY()
};

class IPropInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPropInfo(FPropInfoStruct& outPropInfo);
    
};

