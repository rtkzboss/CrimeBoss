#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnHoverBorderHoverEventDelegate.h"
#include "IGS_WidgetMouseInteractionPlane.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetMouseInteractionPlane : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverBorderHoverEvent OnHoverBorderHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverBorderHoverEvent OnHoverBorderUnhover;
    
    UIGS_WidgetMouseInteractionPlane();

};

