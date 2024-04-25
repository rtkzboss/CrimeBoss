#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_VoiceoversHelpers.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_ProgressGadgetBase;
class AIGS_ThrowableProjectileBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_VoiceoversHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_VoiceoversHelpers();

    UFUNCTION(BlueprintCallable)
    static void ReportGrenadeThrown(AIGS_GameCharacterFramework* Instigator, AIGS_ThrowableProjectileBase* inProjectile);
    
    UFUNCTION(BlueprintCallable)
    static void ReportGadgetDisrupted(AIGS_GameCharacterFramework* Instigator, AIGS_ProgressGadgetBase* inGadget, bool isDrill);
    
};

