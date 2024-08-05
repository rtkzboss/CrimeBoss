#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_SpecialObjectiveAnimData.h"
#include "IGS_SpecialObjectiveAnimsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SpecialObjectiveAnimsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SpecialObjectiveAnimData> AnimVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SpecialObjectiveAnimData> FemaleAnimVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SpecialObjectiveAnimData> FemaleWithHeelsAnimVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Looped;
    
    BF_ANIMATIONS_API FIGS_SpecialObjectiveAnimsTableRow();
};

