#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_TutorialPage.h"
#include "IGS_TutorialScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_TutorialScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TutorialTag;
    
    UIGS_TutorialScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVideoTutorialData(const FIGS_TutorialPage& videoPageData, bool inSlowDownGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTutorialData(const TArray<FIGS_TutorialPage>& Pages, bool inSlowDownGame);
    
};

