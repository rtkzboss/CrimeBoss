#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIWeaponDef.generated.h"

class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
    FIGS_AIWeaponDef();
};

