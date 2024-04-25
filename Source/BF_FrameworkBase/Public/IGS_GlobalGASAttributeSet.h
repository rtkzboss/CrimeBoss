#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "IGS_GlobalGASAttributeSet.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GlobalGASAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemyAIDamage, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnemyAIDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemyAIDamage, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnemyAIReceiveDamage;
    
    UIGS_GlobalGASAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyAIReceiveDamage(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyAIDamage(const FGameplayAttributeData& inOldValue);
    
};

