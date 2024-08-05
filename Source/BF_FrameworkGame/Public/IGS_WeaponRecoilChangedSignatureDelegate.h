#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponRecoilInfoHolder.h"
#include "IGS_WeaponRecoilChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponRecoilChangedSignature, FIGS_WeaponRecoilInfoHolder, RecoilInfoHolder);

