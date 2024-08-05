#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_InteractionAnimationTypes.h"
#include "IGS_NetworkComponentAnimation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentAnimation : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_NetworkComponentAnimation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void MessageToServer_PlayerLightMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_PlayerInteractionRespondChangeReliable(EIGS_InteractionAnimationTypes inVariant);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void MessageToServer_PlayerInteractionRespondChange(EIGS_InteractionAnimationTypes inVariant);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void MessageToServer_PlayerHeavyMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_PlayerLightMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_PlayerInteractionRespondChangeReliable(EIGS_InteractionAnimationTypes inVariants);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_PlayerInteractionRespondChange(EIGS_InteractionAnimationTypes inVariants);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_PlayerHeavyMeleeChainAttackVariantChange(int32 inChainIdx);
    
};

