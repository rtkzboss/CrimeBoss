#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Mutable_Speed_Animaitons.generated.h"

USTRUCT(BlueprintType)
struct FIGS_TPP_Mutable_Speed_Animaitons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    BF_ANIMATIONS_API FIGS_TPP_Mutable_Speed_Animaitons();
};

