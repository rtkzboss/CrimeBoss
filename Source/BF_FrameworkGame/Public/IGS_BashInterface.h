#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_BashInterface.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_BasherComponent;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_BashInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_BashInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupBasher(AIGS_GameCharacterFramework* inOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_BasherComponent* GetBasher() const;
    
};

