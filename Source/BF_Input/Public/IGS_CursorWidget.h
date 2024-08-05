#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_CursorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_INPUT_API UIGS_CursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHovering;
    
public:
    UIGS_CursorWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorHovering() const;
    
};

