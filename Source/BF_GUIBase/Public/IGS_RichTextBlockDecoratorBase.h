#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "IGS_RichTextBlockDecoratorBase.generated.h"

class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;
class UUserWidget;

UCLASS(Blueprintable)
class BF_GUIBASE_API UIGS_RichTextBlockDecoratorBase : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputActionMapDataAsset* InputActionMapAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* InputKeyIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_InputDevice> SupportedInputDevices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo IconFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo FallbackIconFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadDecorator;
    
    UIGS_RichTextBlockDecoratorBase();

};

