#pragma once
#include "CoreMinimal.h"
#include "IGS_GlassPanelPreset.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FIGS_GlassPanelPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> FracturedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> DestroyedMesh;
    
    BF_FRAMEWORKGAME_API FIGS_GlassPanelPreset();
};

