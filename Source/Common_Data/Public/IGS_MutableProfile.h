#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MutableProfileData.h"
#include "IGS_MutableProfile.generated.h"

class UCustomizableObjectPopulation;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MutableProfile : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomizableObjectPopulation> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MutableProfileData> MutableProfiles;
    
    FIGS_MutableProfile();
};

