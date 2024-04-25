#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_InputActionEntry.h"
#include "IGS_InputActionMapDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputActionMapDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_InputActionEntry> InputActions;
    
    UIGS_InputActionMapDataAsset();

};

