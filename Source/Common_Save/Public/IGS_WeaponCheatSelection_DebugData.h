#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponCheatSelection_DebugData.generated.h"

class UIGS_InventoryObjectFramework;
class UIGS_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_WeaponCheatSelection_DebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WeaponPreviewText;
    
    FIGS_WeaponCheatSelection_DebugData();
};

