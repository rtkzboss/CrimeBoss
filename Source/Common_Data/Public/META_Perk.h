#pragma once
#include "CoreMinimal.h"
#include "IGS_PerksTableRow.h"
#include "META_BaseObject.h"
#include "META_Perk.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Perk : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_Perk();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_PerksTableRow GetPerkData();
    
};

