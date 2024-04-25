#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "META_WeaponAmountInfo.h"
#include "META_BossCharacterSave.h"
#include "META_GenericCharacterSave.h"
#include "META_GraphStructSave.h"
#include "META_HeisterSaveData.h"
#include "META_MissionsSave.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "META_CharacterSkinSaveData.h"
#include "META_EquipmentSaveData.h"
#include "META_PerkSaveData.h"
#include "META_TileSaveData.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSaveDataArray.h"
#include "META_WeaponSkinSaveData.h"
#include "META_GraphStruct.h"
#include "Templates/SubclassOf.h"
#include "META_ConvertersData.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_LootItemInventoryObject;
class UMETA_BaseMission;
class UMETA_BossCharacter;
class UMETA_Character;
class UMETA_CharacterSkin;
class UMETA_Equipment;
class UMETA_Perk;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;
class UMETA_WeaponSkin;
class UMapTile;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ConvertersData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_ConvertersData();

    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_WeaponSaveData> ConvertWeaponsToSave2(UPARAM(Ref) TArray<UMETA_Weapon*>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray> ConvertWeaponsToSave(UPARAM(Ref) TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_WeaponSkinSaveData> ConvertWeaponSkinsDataToSave(UPARAM(Ref) TArray<UMETA_WeaponSkin*>& inWeaponSkinsPool);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_WeaponSkin*> ConvertWeaponSkinsDataFromSave(UObject* inWCO, TArray<FMETA_WeaponSkinSaveData> inWeaponSkinsSaveData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Weapon*> ConvertWeaponsFromSave2(UObject* inWCO, const TArray<FMETA_WeaponSaveData>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Weapon*> ConvertWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Weapon*> ConvertWeaponsArrayFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertUniqueCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, UPARAM(Ref) TArray<FMETA_HeisterSaveData>& inUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FGameplayTag, FMETA_TileSaveData> ConvertTilesDataToSave(UPARAM(Ref) TMap<FGameplayTag, UMapTile*>& inTiles);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertTilesDataFromSave(UPARAM(Ref) TMap<FGameplayTag, UMapTile*>& inTiles, TMap<FGameplayTag, FMETA_TileSaveData> inTilesSaveData);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> ConvertStashWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkSaveData> ConvertPerksDataToSave(UPARAM(Ref) TArray<UMETA_Perk*>& inPerksPool);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Perk*> ConvertPerksDataFromSave(UObject* inWCO, TArray<FMETA_PerkSaveData> inPerksSaveData);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_MissionsSave ConvertMissionsToSave(TArray<UMETA_BaseMission*> inMissions, TArray<UMETA_BaseMission*> inTurfMissions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_BaseMission*> ConvertMissionsFromSave(const UObject* inWCO, UPARAM(Ref) FMETA_MissionsSave& inMissions, TArray<UMETA_BaseMission*>& outTurfWarMissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertMissionResultMeta2FPS(EMETA_JobResult MetaResult, ECommonMissionResult& FPSResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertMissionResultFPS2Meta(ECommonMissionResult FPSResult, EMETA_JobResult& MetaResult);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertLootFromFPS(UObject* inWCO, UPARAM(Ref) TArray<TSubclassOf<UIGS_LootItemInventoryObject>>& inLoot, TMap<FGameplayTag, int32>& outMetaLoot, int32& CashLoot);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> ConvertLiveWeaponsToSave(UPARAM(Ref) TArray<UMETA_Weapon*>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData> ConvertLiveEquipmentToSave(UPARAM(Ref) TArray<UMETA_Equipment*>& inEquipment);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_GraphStructSave> ConvertGraphInfoToSave(UPARAM(Ref) TArray<FMETA_GraphStruct>& inGraphInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_GraphStruct> ConvertGraphInfoFromSave(UPARAM(Ref) TArray<FMETA_GraphStructSave>& inGraphInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertGenericCharactersFromSave(UObject* inWCO, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_EquipmentSaveData> ConvertEquipmentToSave2(UPARAM(Ref) TArray<UMETA_Equipment*>& inEquipment);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_EquipmentSaveData> ConvertEquipmentToSave(UPARAM(Ref) TArray<UMETA_Equipment*>& inEquipment);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Equipment*> ConvertEquipmentFromSave2(UObject* inWCO, UPARAM(Ref) TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData>& inEquipment);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Equipment*> ConvertEquipmentFromSave(UObject* inWCO, UPARAM(Ref) TArray<FMETA_EquipmentSaveData>& inEquipment);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertCharactersToSave(UPARAM(Ref) TArray<UMETA_Character*>& inCharacters, bool inIgnoreUnique, TArray<FMETA_GenericCharacterSave>& outGenericCharacters, TArray<FMETA_HeisterSaveData>& outUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertCharactersFromSaveForCrew(UObject* inWCO, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters, UPARAM(Ref) TArray<FMETA_HeisterSaveData>& inUniqueCharacters, TArray<FMETA_EquipmentSaveData>& outEquipmentShouldBeAddedToStashByID, TArray<UMETA_Equipment*>& outEquipmentShouldBeAddedToStashByObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters, UPARAM(Ref) TArray<FMETA_HeisterSaveData>& inUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertBossCharacterToSave(const UMETA_BossCharacter* inBossCharacter, FMETA_BossCharacterSave& outBossCharacter);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_CharacterSkinSaveData> ConvertBossCharacterSkinsDataToSave(UPARAM(Ref) TArray<UMETA_CharacterSkin*>& inBossCharacterSkinsPool);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_CharacterSkin*> ConvertBossCharacterSkinsDataFromSave(UObject* inWCO, TArray<FMETA_CharacterSkinSaveData> inBossCharacterSkinsSaveData);
    
    UFUNCTION(BlueprintCallable)
    static UMETA_BossCharacter* ConvertBossCharacterFromSave(UObject* inWCO, UPARAM(Ref) FMETA_BossCharacterSave& inBossCharacter);
    
};

