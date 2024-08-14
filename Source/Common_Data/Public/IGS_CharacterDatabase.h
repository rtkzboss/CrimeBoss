#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterTableRow.h"
#include "IGS_MutableProfile.h"
#include "IGS_MutableProfileData.h"
#include "IGS_CharacterDatabase.generated.h"

class APaperDollAbstract;
class UCustomizableObjectPopulation;
class UDataTable;
class UIGS_CharacterDatabase;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_CharacterDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CharacterDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextMutableIndex(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MutableProfileData GetMutableVariationByIndex(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_MutableProfile GetMutableProfile(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(EIGS_CharacterID inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterTableRow GetDataCharacterByTagID(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterTableRow GetDataCharacter(UObject* inWCO, EIGS_CharacterID inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CharacterTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<APaperDollAbstract> GetCharacterPaperDoll(UObject* inWCO, EIGS_CharacterID inID, int32 inGenericID, bool inIsMaxLeveled, FGameplayTag inCharacterSkinID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCharacterGenericIDFromEntitlements(UObject* inWCO, EIGS_CharacterID inID, int32 inOriginalGenericID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_CharacterDatabase* GetCharacterDatabaseInstance(UObject* inWCO);
    
};

