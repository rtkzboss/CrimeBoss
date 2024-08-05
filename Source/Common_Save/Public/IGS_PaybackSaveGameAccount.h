#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_SaveData_Account.h"
#include "IGS_PaybackSaveGameAccount.generated.h"

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_PaybackSaveGameAccount : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Account SaveData_Account;
    
    UIGS_PaybackSaveGameAccount();

};

