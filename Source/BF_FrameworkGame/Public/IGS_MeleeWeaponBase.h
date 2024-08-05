#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_BashInterface.h"
#include "IGS_MeleeWeaponBase.generated.h"

class UIGS_BasherComponent;
class UIGS_SkinHandlerBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_MeleeWeaponBase : public AIGS_WieldableBase, public IIGS_BashInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WeaponAttackType PrimaryShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BasherComponent* Basher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SkinHandlerBase* SkinHandler;
    
public:
    AIGS_MeleeWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsAttacking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    

    // Fix for true pure virtual functions not being implemented
};

