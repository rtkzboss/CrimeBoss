#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialResponseDelegate.h"
#include "IGS_TryDisplayTutorial.generated.h"

class UIGS_TryDisplayTutorial;
class UIGS_TutorialScreen;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_TryDisplayTutorial : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TutorialResponse OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TutorialScreen* m_TutorialScreen;
    
public:
    UIGS_TryDisplayTutorial();

    UFUNCTION(BlueprintCallable)
    static UIGS_TryDisplayTutorial* TryDisplayTutorial(UObject* inWCO, FGameplayTag inTutorialTag, bool& outTutorialAlreadyFinished, bool ShowEvenFinished, bool DEBUG_SaveTutorialCompleted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialScreenClosed(const FGameplayTag& inTag);
    
};

