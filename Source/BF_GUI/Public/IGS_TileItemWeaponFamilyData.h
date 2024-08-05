#pragma once
#include "CoreMinimal.h"
#include "META_ComparableItemData.h"
#include "GameplayTagContainer.h"
#include "IGS_TileItemWeaponFamilyData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_TileItemWeaponFamilyData : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasDlcItem;
    
    UIGS_TileItemWeaponFamilyData();

};

