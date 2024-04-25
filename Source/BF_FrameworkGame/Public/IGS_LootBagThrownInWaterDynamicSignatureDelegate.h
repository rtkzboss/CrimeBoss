#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagThrownInWaterDynamicSignatureDelegate.generated.h"

class AIGS_PlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootBagThrownInWaterDynamicSignature, AIGS_PlayerCharacter*, Instigator);

