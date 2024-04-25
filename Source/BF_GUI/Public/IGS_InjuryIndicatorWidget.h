#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HealthChangedSignatureDelegate.h"
#include "IGS_InjuryIndicatorWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_InjuryIndicatorWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HealthChangedSignature OnHealthChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerCharacter> PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> PlayerController;
    
public:
    UIGS_InjuryIndicatorWidget();

};

