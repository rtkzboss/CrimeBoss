#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MeleeWeaponData.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponTableRow.generated.h"

class UIGS_MeleeWeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MeleeWeaponTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MeleeWeaponInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MeleeWeaponData Data;
    
    FIGS_MeleeWeaponTableRow();
};

