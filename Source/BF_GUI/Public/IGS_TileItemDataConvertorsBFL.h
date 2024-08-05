#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_UITileQualityColors.h"
#include "CommonHeisterData.h"
#include "EIGS_TileItemState.h"
#include "IGS_CharacterPanelDataStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMETA_ItemQuality.h"
#include "IGS_TileItemDataConvertorsBFL.generated.h"

class UIGS_TileItemData;
class UIGS_TileItemWeaponFamilyData;
class UIGS_UnlockManager;
class UMETA_BaseObject;
class UMETA_BossCharacter;
class UMETA_Character;
class UObject;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_TileItemDataConvertorsBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_TileItemDataConvertorsBFL();

    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* UnlockItemToTileItemData(FIGS_UnlockItemInfo inUnlockItemInfo, EIGS_TileItemState inState, UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemWeaponFamilyData*> SortWeaponFamilyData(TArray<UIGS_TileItemWeaponFamilyData*> inArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortTileItemData(TArray<UIGS_TileItemData*> inArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortedUnlockItemsToTileItemData(TArray<FIGS_UnlockItemInfo> inUnlockItemsInfo, EIGS_TileItemState inState, UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortedBaseObjectsToTileItemData(const UIGS_UnlockManager* inUnlockManager, TArray<UMETA_BaseObject*> inObjects, EIGS_TileItemState inState, UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* MetaBaseObjectToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BaseObject* inBaseObject, EIGS_TileItemState inState, UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_CharacterPanelDataStruct HeisterDataToCharacterPanelData(UPARAM(Ref) FCommonHeisterData& inHeisterData, UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_UITileQualityColors GetColorSetForQuality(EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterPanelDataStruct CharacterToCharacterPanelData(UObject* inWCO, UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* BossCharacterToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BossCharacter* inBossCharacter);
    
};

