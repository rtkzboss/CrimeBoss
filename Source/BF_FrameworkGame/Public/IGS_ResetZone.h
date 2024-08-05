#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_ResetTriggerResult.h"
#include "IGS_LootBagThrownInWaterDynamicSignatureDelegate.h"
#include "IGS_ResetZone.generated.h"

class AIGS_LootBagPickup;
class AIGS_PlayerCharacter;
class UBoxComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ResetZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ResetTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LastCheckpointResetLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavmeshSearchExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavmeshSearchExtentWider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavmeshOffsetZ;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ResetTriggerResult ResetTriggerResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootBagThrownInWaterDynamicSignature OnLootBagInWaterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugCapsule;
    
    AIGS_ResetZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ResetCharacter(AIGS_PlayerCharacter* Character, FVector& safeResetLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillCharacter(AIGS_PlayerCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleResetTrigger(AActor* inOtherActor, bool bKillOnFail);
    
    UFUNCTION(BlueprintCallable)
    void HandleReset(AIGS_PlayerCharacter* Character, FVector& safeResetLocation);
    
    UFUNCTION(BlueprintCallable)
    bool HandleBagReset(AIGS_LootBagPickup* bag, FVector& safeResetLocation);
    
    UFUNCTION(BlueprintCallable)
    void HandleBagDestroy(AIGS_LootBagPickup* bag);
    
};

