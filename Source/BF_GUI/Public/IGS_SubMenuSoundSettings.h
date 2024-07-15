#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuSoundSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_SubMenuSoundSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* MasterVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* SFXVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* MusicVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* DialogueVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* ControllerSpeakerVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* OutputDeviceSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* AudioMixSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* SoundEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* SoundInBackgroundEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* StreamerModSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* RadioDialoguesOutputSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSlider* VoiceChatVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* VoiceChatEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetFocusableSpinBox* InputDeviceSpinBox;
    
    UIGS_SubMenuSoundSettings();

};

