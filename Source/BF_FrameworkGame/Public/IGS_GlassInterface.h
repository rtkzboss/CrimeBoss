#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_GlassInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_GlassInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_GlassInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsGlass() const;
    
};

