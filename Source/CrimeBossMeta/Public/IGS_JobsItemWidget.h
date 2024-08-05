#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GameplayTagContainer.h"
#include "EJobUITileType.h"
#include "IGS_JobCategoryItemUIData.h"
#include "IGS_JobItemSelectedDelegate.h"
#include "IGS_JobsItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsItemWidget : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JobIDTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOwned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_JobItemSelected OnJobItemSelected;
    
    UIGS_JobsItemWidget();

    UFUNCTION(BlueprintCallable)
    void SetUIData(const FIGS_JobCategoryItemUIData& inUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsOwnedChanged(bool inIsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeUIData(const FIGS_JobCategoryItemUIData& inUIData);
    
    UFUNCTION(BlueprintCallable)
    EJobUITileType GetDisplayType();
    
};

