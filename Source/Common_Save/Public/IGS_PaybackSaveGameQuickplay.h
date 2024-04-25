#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_SaveData_Quickplay.h"
#include "IGS_PaybackSaveGameQuickplay.generated.h"

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_PaybackSaveGameQuickplay : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Quickplay SaveData_Quickplay;
    
    UIGS_PaybackSaveGameQuickplay();

};

