#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "EIGS_TileItemState.h"
#include "IGS_CharacterPanelDataStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_TileItemDataConvertorsBFL.generated.h"

class UIGS_TileItemData;
class UIGS_UnlockManager;
class UMETA_BaseObject;
class UMETA_BossCharacter;
class UMETA_Character;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_TileItemDataConvertorsBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_TileItemDataConvertorsBFL();

    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* UnlockItemToTileItemData(FIGS_UnlockItemInfo inUnlockItemInfo, EIGS_TileItemState inState);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortTileItemData(TArray<UIGS_TileItemData*> inArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortedUnlockItemsToTileItemData(TArray<FIGS_UnlockItemInfo> inUnlockItemsInfo, EIGS_TileItemState inState);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIGS_TileItemData*> SortedBaseObjectsToTileItemData(const UIGS_UnlockManager* inUnlockManager, TArray<UMETA_BaseObject*> inObjects, EIGS_TileItemState inState);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* MetaBaseObjectToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BaseObject* inBaseObject, EIGS_TileItemState inState);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterPanelDataStruct CharacterToCharacterPanelData(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TileItemData* BossCharacterToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BossCharacter* inBossCharacter);
    
};

