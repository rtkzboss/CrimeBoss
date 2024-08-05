#pragma once
#include "CoreMinimal.h"
#include "IGS_TaskWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_TaskWidgetOr.generated.h"

class UIGS_TaskWidgetHolder;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_TaskWidgetOr : public UIGS_TaskWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* FirstTaskBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SecondTaskBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetHolder> TaskWidgetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayWidgetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;
    
    UIGS_TaskWidgetOr();

};

