#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_EquipmentSaveData.h"
#include "META_BaseObject.h"
#include "Templates/SubclassOf.h"
#include "META_Equipment.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_Character;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Equipment : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnseenInShop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AdditionalPercentageOfEquipmentPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Character* m_Character;
    
public:
    UMETA_Equipment();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_EquipmentSaveData inSaveData);
    
    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inNewPrice);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfo(UObject* inWCO, const TSubclassOf<UIGS_EquipmentInventoryObject>& inEquipmentId);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfEquipmentPrice(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_EquipmentSaveData GetSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSalePrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UIGS_EquipmentInventoryObject> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Character* GetCharacter() const;
    
};

