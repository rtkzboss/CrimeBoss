#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_WeaponCheatSelection_DebugData.h"
#include "IGS_DebugWeaponCheatSelection.generated.h"

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_DebugWeaponCheatSelection : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_WeaponCheatSelection_DebugData SaveData_WeaponCheatSelection;
    
    UIGS_DebugWeaponCheatSelection();

};

