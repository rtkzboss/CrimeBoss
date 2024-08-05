#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KiBLIISettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class UKiBLIISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInEditor;
    
    UKiBLIISettings();

};

