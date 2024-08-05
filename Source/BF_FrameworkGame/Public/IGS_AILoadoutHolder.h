#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AILoadoutData.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "IGS_AIWeaponPoolDef.h"
#include "IGS_AILoadoutHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AILoadoutHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIWeaponPoolDef WeaponPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AILoadoutData> WeaponProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoThrowableChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AIThrowableWeaponDef> ThrowablePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EmptyWeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowNoThrowableBool;
    
    BF_FRAMEWORKGAME_API FIGS_AILoadoutHolder();
};

