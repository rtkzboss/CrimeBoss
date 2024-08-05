#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_HubRotation.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBLevelWithTag.h"
#include "IGS_HUBBackdropsRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBBackdropsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubRotation RotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubBackdropTypes BackdropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubDistrict DistrictType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BuildConfigurationTileable DA_Art;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_HUBLevelWithTag> Scenarios;
    
    BF_LEVELGENERATOR_API FIGS_HUBBackdropsRow();
};

