#pragma once
#include "CoreMinimal.h"
#include "ShoutScanData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_ShoutHelpers.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_ShoutHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ShoutHelpers();

    UFUNCTION(BlueprintCallable)
    static void Shout(AIGS_GameCharacterFramework* Instigator, FShoutScanData inScanData);
    
    UFUNCTION(BlueprintCallable)
    static void GetShoutAtCharacters(AIGS_GameCharacterFramework* Instigator, FShoutScanData& outScanData);
    
};

