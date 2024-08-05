#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_LootPurpose.h"
#include "META_NotificationTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_NotificationDatabase.generated.h"

class UMETA_AssetNotification;
class UMETA_BaseGoal;
class UMETA_BaseMission;
class UMETA_Character;
class UMETA_CharacterNotification;
class UMETA_DetectiveID;
class UMETA_DetectiveNotification;
class UMETA_FinancialNotification;
class UMETA_GoalNotification;
class UMETA_LootNotification;
class UMETA_MissionNotification;
class UMETA_NotificationID;
class UMETA_PlotlineAsset;
class UMETA_TaskCondition;
class UMETA_TaskNotification;
class UMETA_TextNotification;
class UMETA_TradeNotification;
class UMETA_TurfNotification;
class UMETA_Weapon;
class UMETA_WeaponNotification;
class UMapTile;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_NotificationDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_NotificationDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_NotificationTableRow GetNotificationData(UObject* inWCO, const TSoftObjectPtr<UMETA_NotificationID> inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    UMETA_WeaponNotification* CreateWeaponNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    UMETA_TurfNotification* CreateTurfNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMapTile* inMaptile, EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    UMETA_TradeNotification* CreateTradeNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, EMETA_TradeVendor inVendor, FGameplayTag inLoot, FText inMoney);
    
    UFUNCTION(BlueprintCallable)
    UMETA_TextNotification* CreateTextNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, FText inOption);
    
    UFUNCTION(BlueprintCallable)
    UMETA_TaskNotification* CreateTaskNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_TaskCondition* inTask, UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable)
    UMETA_MissionNotification* CreateMissionNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable)
    UMETA_LootNotification* CreateLootNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, const FText& inLootCategory, const EMETA_LootPurpose inLootPurpose, const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    UMETA_GoalNotification* CreateGoalNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable)
    UMETA_FinancialNotification* CreateFinancialNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, int32 inMoney, bool inShowAbsolute);
    
    UFUNCTION(BlueprintCallable)
    UMETA_DetectiveNotification* CreateDetectiveNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, TSubclassOf<UMETA_DetectiveID> inDetective, EMETA_Gang inGang, UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable)
    UMETA_CharacterNotification* CreateCharacterNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_Character* inCharacter, FText inOption);
    
    UFUNCTION(BlueprintCallable)
    UMETA_AssetNotification* CreateAssetNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_PlotlineAsset* InAsset);
    
};

