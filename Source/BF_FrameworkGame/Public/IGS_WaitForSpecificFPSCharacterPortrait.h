#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SpecificFPSCharacterPortraitReadyOutputPinDelegate.h"
#include "IGS_WaitForSpecificFPSCharacterPortrait.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_WaitForSpecificFPSCharacterPortrait;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForSpecificFPSCharacterPortrait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecificFPSCharacterPortraitReadyOutputPin WhenCharacterPortraitReady;
    
    UIGS_WaitForSpecificFPSCharacterPortrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForSpecificFPSCharacterPortrait* WaitForCharacterPortrait(UObject* inWorldContextObject, AIGS_GameCharacterFramework* inCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnCharacterPortraitReady(TSoftObjectPtr<UTexture2D> inCharacterPortrait);
    
};

