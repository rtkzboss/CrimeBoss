#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_CharacterSkinSaveData.h"
#include "META_EquipmentSaveData.h"
#include "META_PerkSaveData.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSkinSaveData.h"
#include "META_HeisterSaveData.h"
#include "IGS_Quick_BlackmarketManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_BlackmarketManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_HeisterSaveData> Heisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_WeaponSaveData> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_WeaponSkinSaveData> WeaponSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_EquipmentSaveData> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkSaveData> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CharacterSkinSaveData> BossCharacterSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
    FIGS_Quick_BlackmarketManagerSaveData();
};

