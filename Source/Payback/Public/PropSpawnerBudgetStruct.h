#pragma once
#include "CoreMinimal.h"
#include "EIGS_PropSpawnerBudgetSize.h"
#include "PropBudgetIntervalStruct.h"
#include "PropSpawnerBudgetStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropSpawnerBudgetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_PropSpawnerBudgetSize PropSpawnerBudgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropBudgetIntervalStruct SmallBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropBudgetIntervalStruct MediumBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropBudgetIntervalStruct LargeBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxSpawnsPerSameProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxRerollsIfRedundant;
    
    PAYBACK_API FPropSpawnerBudgetStruct();
};

