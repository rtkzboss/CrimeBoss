#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "IGS_CrewManangerInitializedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_CrewManagerBaseComponent.generated.h"

class UMETA_Character;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_CrewManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CrewManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerInitialized;
    
public:
    UIGS_CrewManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SwitchWeaponsBetweenHeisters(UMETA_Character* CharacterA, UMETA_Character* CharacterB, UMETA_Weapon* weaponObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowUpkeepCost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PromoteHeister(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveWeaponToItsSlotInHeistersLoadoutFromStash(UMETA_Character* ToCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, UMETA_Character* FromCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveWeaponFromHeistersSlotToStash(UMETA_Character* Character, EIGS_InventorySlot inInventorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveHeistersLoadoutToStash(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterTaken(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealHeisterByRest(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealHeisterByDoctor(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLevelUpCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Character* GetHeisterByID(EIGS_CharacterID ID, int32 UniqGenericId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHealingHeisterCostByRest(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHealingHeisterCostByDoctor(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Character* GetCharacterByTag(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_Character*> GetAllHeisters(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireCharacter(UMETA_Character* Character);
    
};

