#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelBuilderRepProperties.generated.h"

USTRUCT(BlueprintType)
struct FIGS_LevelBuilderRepProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicatedSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionsString;
    
    BF_LEVELGENERATOR_API FIGS_LevelBuilderRepProperties();
};

