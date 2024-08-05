#pragma once
#include "CoreMinimal.h"
#include "META_Loan.h"
#include "META_Loans.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_Loans {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_Loan> Loans;
    
    FMETA_Loans();
};

