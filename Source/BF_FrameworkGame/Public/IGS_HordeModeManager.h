#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HordeModeActiveSignatureDelegate.h"
#include "IGS_HordeModeTokenAddedSignatureDelegate.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignatureDelegate.h"
#include "IGS_HordeModeManager.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_HordeModeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeActiveSignature OnHordeModeActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeValuesChangedSignature OnHordeModeValuesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeTokenAddedSignature OnHordeModeTokenAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeModeActive, meta=(AllowPrivateAccess=true))
    bool bIsHordeModeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeModeValues, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeValues HordeModeValues;
    
    UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress);
    
    UFUNCTION(BlueprintCallable)
    static void SetHordeModeActive(const UObject* inWCO, bool Inactive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeModeActive(bool inOldHordeModeActive);
    
public:
    UFUNCTION(BlueprintCallable)
    static void AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount);
    
};

