#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "Components/RichTextBlock.h"
#include "IGS_RichTextBlockBase.generated.h"

UCLASS(Blueprintable)
class BF_GUIBASE_API UIGS_RichTextBlockBase : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputDevice PreviewInputDevice;
    
    UIGS_RichTextBlockBase();

    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged(EIGS_InputDevice inInputDevice);
    
};

