#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_EntitlementsDataRefreshedSignatureDelegate.h"
#include "IGS_Entitlements.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_Entitlements : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EntitlementsDataRefreshedSignature OnEntitlementDataRefreshed;
    
    UIGS_Entitlements();

    UFUNCTION(BlueprintCallable)
    bool UserEntitledTo(FGameplayTag inEntitlementTag);
    
    UFUNCTION(BlueprintCallable)
    bool RequiresCampaignRestart(FGameplayTag inEntitlementTag);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    static bool OpenStore(const UObject* inWCO, FGameplayTag inEntitlementTag);
    
    UFUNCTION(BlueprintCallable)
    void LoadDebugEntitlements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementDLC(FGameplayTag inEntitlement) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetOwnedEntitlements();
    
    UFUNCTION(BlueprintCallable)
    static void GetEntitlementTitle(UObject* inWCO, const FGameplayTag inEntitlement, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void Connect();
    
    UFUNCTION(BlueprintCallable)
    void AddDebugEntitlement(FGameplayTag inEntitlement);
    
};

