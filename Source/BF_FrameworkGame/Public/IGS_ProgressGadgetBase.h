#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "IGS_OnGadgetOverheatedEventDelegate.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_ProgressGadgetBase.generated.h"

class AIGS_GameCharacterFramework;
class ANavigationData;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProgressGadgetBase : public AIGS_SuspicionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualDisruptLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DisruptLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ProgressGadgetSubtype GadgetSubtype;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGadgetOverheatedEvent OnGadgetOverheatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanByDisrubtedByAI;
    
public:
    AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WaitForNavmeshAndValidate(ANavigationData* inNavData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanBeDisruptedByAI(bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisruptedByAI(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDisruptLocation() const;
    
};

