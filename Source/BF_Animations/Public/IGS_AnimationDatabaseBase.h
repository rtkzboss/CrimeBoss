#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_AnimationDatabaseBase.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimationDatabaseBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LinkedGraphDefinition> LinkedGraphs;
    
    FIGS_AnimationDatabaseBase();
};

