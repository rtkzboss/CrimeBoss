#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SpecificCharacterPortraitReadyOutputPinDelegate.h"
#include "IGS_WaitForSpecificCharacterPortrait.generated.h"

class UIGS_WaitForSpecificCharacterPortrait;
class UMETA_Character;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForSpecificCharacterPortrait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecificCharacterPortraitReadyOutputPin WhenCharacterPortraitReady;
    
    UIGS_WaitForSpecificCharacterPortrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForSpecificCharacterPortrait* WaitForCharacterPortrait(UObject* inWorldContextObject, UMETA_Character* inCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnCharacterPortraitReady(TSoftObjectPtr<UTexture2D> inCharacterPortrait);
    
};

