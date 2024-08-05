#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "IGS_GlobalPostProcessesDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_RENDERING_API UIGS_GlobalPostProcessesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PasswordQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> VisualStylePostProcesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> VisorPostProcesses;
    
    UIGS_GlobalPostProcessesDataAsset();

};

