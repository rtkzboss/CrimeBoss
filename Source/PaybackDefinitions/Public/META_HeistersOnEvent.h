#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_HeistersOnEvent.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeistersOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CharacterID> HeistersOnEvent;
    
    FMETA_HeistersOnEvent();
};

