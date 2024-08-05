#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_BreachInterface.h"
#include "IGS_AITransitionObjectBase.generated.h"

class UBoxComponent;
class UIGS_GetActorByGameplayTagComponent;
class UIGS_NavLinkComponentFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AITransitionObjectBase : public AActor, public IIGS_BreachInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NavLinkComponentFramework* NavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GetActorByGameplayTagComponent* m_GetActorByGameplayTagComponent;
    
public:
    AIGS_AITransitionObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupNavlink(UBoxComponent* helpersBox) const;
    
    UFUNCTION(BlueprintCallable)
    void SetNavlinkLinkEnabled(bool InValue);
    

    // Fix for true pure virtual functions not being implemented
};

