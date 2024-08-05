#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "IGS_InputActionEntry.generated.h"

USTRUCT(BlueprintType)
struct BF_INPUT_API FIGS_InputActionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    FIGS_InputActionEntry();
};

