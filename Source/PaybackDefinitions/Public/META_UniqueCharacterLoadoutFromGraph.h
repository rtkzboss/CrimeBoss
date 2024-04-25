#pragma once
#include "CoreMinimal.h"
#include "META_ArrayEquipmentAllowedClasses.h"
#include "META_UniqueCharacterLoadoutFromGraph.generated.h"

USTRUCT(BlueprintType)
struct FMETA_UniqueCharacterLoadoutFromGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ArrayEquipmentAllowedClasses Equipment;
    
    PAYBACKDEFINITIONS_API FMETA_UniqueCharacterLoadoutFromGraph();
};

