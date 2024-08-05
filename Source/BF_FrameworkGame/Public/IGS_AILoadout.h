#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_AILoadout.generated.h"

class UIGS_AIMeleeWeaponDef;
class UIGS_AIPrimaryWeaponDef;
class UIGS_AISecondaryWeaponDef;

USTRUCT(BlueprintType)
struct FIGS_AILoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_AIPrimaryWeaponDef> PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_AISecondaryWeaponDef> SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_AIMeleeWeaponDef> MeleeWeapon;
    
    BF_FRAMEWORKGAME_API FIGS_AILoadout();
};

