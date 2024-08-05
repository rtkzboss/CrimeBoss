#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_HasObjectStatusInterface.generated.h"

class UIGS_ObjectStatus;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_HasObjectStatusInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKBASE_API IIGS_HasObjectStatusInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_ObjectStatus* IGetObjectStatus() const;
    
};

