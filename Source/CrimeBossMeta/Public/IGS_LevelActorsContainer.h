#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelActorsContainer.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIGS_LevelActorsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    CRIMEBOSSMETA_API FIGS_LevelActorsContainer();
};

