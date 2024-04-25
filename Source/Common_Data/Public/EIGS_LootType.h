#pragma once
#include "CoreMinimal.h"
#include "EIGS_LootType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LootType : uint8 {
    Generic,
    Drugs,
    MoneyCash,
    Jewellery,
    PreciousMetal,
    WeedPlant,
    Painting,
    MoneyBox,
    LootBagGeneric,
    LootBagLoot,
    Crate,
    Art,
};

