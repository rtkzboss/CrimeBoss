#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerAnimationReloader.generated.h"

class AIGS_WeaponBase;
class UIGS_ReloaderBase;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_PlayerAnimationReloader {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* m_ReloadBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* m_WeaponBase;
    
public:
    FIGS_PlayerAnimationReloader();
};

