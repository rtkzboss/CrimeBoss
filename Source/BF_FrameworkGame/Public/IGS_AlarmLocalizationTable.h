#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AlarmLocalizationTable.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AlarmLocalizationTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_AlarmReason, FText> Entry;
    
    UIGS_AlarmLocalizationTable();

};

