#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.h"
#include "PaybackAICharacter.h"
#include "PaybackSniperCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackSniperCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponVisibilityType, meta=(AllowPrivateAccess=true))
    EIGS_WeaponVisibilityType WeaponVisibilityType;
    
    APaybackSniperCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponVisibilityType() const;
    
};

