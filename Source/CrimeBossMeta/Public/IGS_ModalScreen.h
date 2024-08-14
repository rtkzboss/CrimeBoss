#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "IGS_ModalTableRow.h"
#include "IGS_ModalWindowResponseDelegate.h"
#include "IGS_ModalScreen.generated.h"

class UBinkMediaPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_ModalScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnExtraOptionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalTableRow ModalData;
    
    UIGS_ModalScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetModalTexts(const FText& InTitle, const FText& inDescription, const FText& inConfirmText, const FText& inCancelText, const FText& inExtraOptionText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetModalData(const FIGS_ModalTableRow& inData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVideo(const UBinkMediaPlayer* inMedia, bool inSlowDown);
    
};

