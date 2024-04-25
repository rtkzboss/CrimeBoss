#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "IGS_CustomGameUserSettings.generated.h"

class UIGS_ControllerSettings;
class UIGS_CustomGameUserSettings;
class UIGS_GameSettings;
class UIGS_InputBindSettings;
class UIGS_MouseSettings;
class UIGS_RenderingSettings;
class UIGS_SoundSettings;
class UIGS_TogglesSettings;

UCLASS(Blueprintable)
class BF_SETTINGS_API UIGS_CustomGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SoundSettings* SoundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GameSettings* GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_RenderingSettings* RenderingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ControllerSettings* ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_TogglesSettings* TogglesSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MouseSettings* MouseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputBindSettings* InputBindSettings;
    
    UIGS_CustomGameUserSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_CustomGameUserSettings* Instance();
    
};

