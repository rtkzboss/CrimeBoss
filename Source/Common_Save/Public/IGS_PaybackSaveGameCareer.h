#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_SaveData_Career.h"
#include "IGS_PaybackSaveGameCareer.generated.h"

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_PaybackSaveGameCareer : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Career SaveData_Career;
    
    UIGS_PaybackSaveGameCareer();

};

