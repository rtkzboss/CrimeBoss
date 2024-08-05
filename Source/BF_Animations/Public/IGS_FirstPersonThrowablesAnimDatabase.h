#pragma once
#include "CoreMinimal.h"
#include "IGS_FirstPersonAnimationDatabaseBase.h"
#include "IGS_FirstPersonThrowablesAnimDatabase.generated.h"

class AIGS_ThrowableBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonThrowablesAnimDatabase : public FIGS_FirstPersonAnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_ThrowableBase> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Throw_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Throw_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Throw_UpWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Throw_DownWeapon;
    
    FIGS_FirstPersonThrowablesAnimDatabase();
};

