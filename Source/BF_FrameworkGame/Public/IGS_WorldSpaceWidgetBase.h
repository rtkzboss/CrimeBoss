#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_HeisterNumberChangedDelegate.h"
#include "IGS_ProgressWidgetTypeChangedEventDelegate.h"
#include "IGS_StatusProgressChangedEventDelegate.h"
#include "IGS_WorldSpaceWidgetBase.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceWidgetBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HeisterNumberChanged OnHeisterNumberChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StatusProgressChangedEvent OnStatusProgressChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ProgressWidgetTypeChangedEvent OnWidgetSubtypeChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldWidgetOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WidgetType, meta=(AllowPrivateAccess=true))
    EIGS_WorldWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeisterNumber, meta=(AllowPrivateAccess=true))
    uint8 HeisterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ProgressGadgetSubtype ProgressWidgetSubtype;
    
public:
    UIGS_WorldSpaceWidgetBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWorldSpaceWidgetVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetType(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressWidgetSubtype(EIGS_ProgressGadgetSubtype inType);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerForBinding(AActor* inOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHidden(bool inHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetTypeChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WidgetType(const EIGS_WorldWidgetType inOldType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeisterNumber();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressChanged();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsWidgetGroupVisible();
    
};

