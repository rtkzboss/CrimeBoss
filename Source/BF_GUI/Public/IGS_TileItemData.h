#pragma once
#include "CoreMinimal.h"
#include "IGS_UITileQualityColors.h"
#include "EIGS_TileItemState.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_TileItemDataStruct.h"
#include "META_ComparableItemData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "TileDataChangedDelegateDelegate.h"
#include "IGS_TileItemData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_TileItemData : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTileDataChangedDelegate OnTileDataChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TileItemDataStruct m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_UITileQualityColors m_QualityColorSet;
    
public:
    UIGS_TileItemData();

    UFUNCTION(BlueprintCallable)
    void SetTileState(EIGS_TileItemState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTaken(bool inIsTaken);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNew(bool inIsNew);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEquiped(bool inIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsChallenge(bool inIsChallenge);
    
    UFUNCTION(BlueprintCallable)
    void SetData(FIGS_TileItemDataStruct inData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TileItemState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTaken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEquiped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChallenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasCustomAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntitlementTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_TileItemDataStruct GetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomTakenText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomEquipedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomActionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_UITileQualityColors GetColorSetForThisItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_UnlockCategory GetCategory() const;
    
};

