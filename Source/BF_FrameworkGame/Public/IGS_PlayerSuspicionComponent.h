#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_PlayerSuspicionComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuspicionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ShouldFootstepsBeDetectableQuery;
    
public:
    UIGS_PlayerSuspicionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFootstepsBeDetectable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyOffence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_RoomSecurityType GetRoomSecurityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentWieldableOffences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentWieldableClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetCurrentOffences();
    
};

