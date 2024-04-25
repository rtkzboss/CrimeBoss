#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldFormat.h"
#include "AudioOut2SpatializationSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAudioOut2SpatializationSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassThrough;
    
    UAudioOut2SpatializationSettings();

};

