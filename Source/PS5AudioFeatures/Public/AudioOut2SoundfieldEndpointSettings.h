#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldEndpoint.h"
#include "AudioOut2SoundfieldEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAudioOut2SoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndex;
    
    UAudioOut2SoundfieldEndpointSettings();

};

