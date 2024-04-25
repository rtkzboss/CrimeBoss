#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_UnitSpecialization.h"
#include "Templates/SubclassOf.h"
#include "IGS_PassangerDefinition.generated.h"

class UIGS_SettingsID;

USTRUCT(BlueprintType)
struct FIGS_PassangerDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeatSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CarSeatVariant SeatVariant;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GetOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    BF_FRAMEWORKGAME_API FIGS_PassangerDefinition();
};

