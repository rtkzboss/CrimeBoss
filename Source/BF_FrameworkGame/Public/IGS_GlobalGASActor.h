#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_GlobalGASActor.generated.h"

class AIGS_GlobalGASActor;
class UAbilitySystemComponent;
class UIGS_GetActorByGameplayTagComponent;
class UIGS_GlobalGASAttributeSet;
class UIGS_GlobalGASComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GlobalGASActor : public AActor, public IIGS_GameplayTagAssetInterfaceCustom, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalGASComponent* GlobalGASComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalGASAttributeSet* GlobalGASAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GetActorByGameplayTagComponent* GetActorByGameplayTagComponent;
    
public:
    AIGS_GlobalGASActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AIGS_GlobalGASActor* GetGlobalGASActor(UObject* inWCO);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const PURE_VIRTUAL(GetAbilitySystemComponent,return nullptr;);
};

