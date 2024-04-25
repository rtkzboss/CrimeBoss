#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ShoutScanData.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_LeanSide.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_MantleType.h"
#include "IGS_AimGameCharacterChangedEventDelegate.h"
#include "IGS_LeanChangedEventDelegate.h"
#include "IGS_MantleTypeChangedEventDelegate.h"
#include "IGS_PlayerWorldTracingComponent.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerWorldTracingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AimGameCharacterChangedEvent OnAimGameCharacterChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LeanChangedEvent OnLeanChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MantleTypeChangedEvent OnMantleTypeChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToLean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanSphereCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanSideCheckOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanUpCheckOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleZSizeAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleCheckZOffsetUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleDownSweepOffsetMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutScanData m_ShoutScanData;
    
public:
    UIGS_PlayerWorldTracingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtFriendly(bool inNeedsAlive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtEnemyBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtEnemy(bool inNeedsAlive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimCharacterAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MantleType GetCurrentMantleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentMantleLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LeanSide GetCurrentLeanSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetAimCharacterTeamside() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetAimCharacterAttitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetAimCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMantle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLean() const;
    
};

