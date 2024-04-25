#pragma once
#include "CoreMinimal.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_AnimIntermediaryLinker.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimIntermediaryLinker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LinkedGraphDefinition> m_LinkedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> m_LoadedClasses;
    
public:
    FIGS_AnimIntermediaryLinker();
};

