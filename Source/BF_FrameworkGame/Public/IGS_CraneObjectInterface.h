#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_CraneObjectInterface.generated.h"

class UIGS_CraneObjectComponent;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_CraneObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_CraneObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_CraneObjectComponent* GetCraneObjectComponent() const;
    
};

