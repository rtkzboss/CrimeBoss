#pragma once
#include "CoreMinimal.h"
#include "IAudioEndpoint.h"
#include "AudioOut2ExternalEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAudioOut2ExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndex;
    
    UAudioOut2ExternalEndpointSettings();

};

