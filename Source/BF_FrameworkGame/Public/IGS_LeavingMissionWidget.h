#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_LeavingMissionWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_LeavingMissionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UIGS_LeavingMissionWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultText();
    
};

