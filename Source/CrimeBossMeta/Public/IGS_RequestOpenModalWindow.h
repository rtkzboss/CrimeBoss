#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EScreenZOrder.h"
#include "IGS_ModalTableRow.h"
#include "IGS_ModalWindowResponseDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_RequestOpenModalWindow.generated.h"

class UBinkMediaPlayer;
class UIGS_ModalScreen;
class UIGS_RequestOpenModalWindow;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_RequestOpenModalWindow : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnExtraOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModalWindowResponse OnCancelled;
    
    UIGS_RequestOpenModalWindow();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_RequestOpenModalWindow* RequestOpenVideoModalWindow(UObject* WorldContextObject, TSubclassOf<UIGS_ModalScreen> modalScreenClass, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText, UBinkMediaPlayer* inMedia, bool inSlownDown, EScreenZOrder screenOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_RequestOpenModalWindow* RequestOpenModalWindowDataRow(UObject* WorldContextObject, UPARAM(Ref) FIGS_ModalTableRow& ModalData, EScreenZOrder screenOrder, bool isTutorial);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_RequestOpenModalWindow* RequestOpenModalWindow(UObject* WorldContextObject, TSubclassOf<UIGS_ModalScreen> modalScreenClass, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText, EScreenZOrder screenOrder);
    
private:
    UFUNCTION(BlueprintCallable)
    void ModalWindowExtraSelected_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ModalWindowConfirmed_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ModalWindowCancelled_Internal();
    
};

