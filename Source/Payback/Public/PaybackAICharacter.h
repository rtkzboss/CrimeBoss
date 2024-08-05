#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGameCharacter.h"
#include "IGS_ComponentsPreInitializedDelegate.h"
#include "PaybackAICharacter.generated.h"

class UCapsuleComponent;
class UIGS_AIWorldTracingComponent;
class UIGS_BleedingHandlerComponent;
class UIGS_InteractionStealthKillComponent;
class UIGS_NetworkComponentCharacter;
class UPaybackAICharactersEventsWatcher;
class USphereComponent;

UCLASS(Blueprintable)
class PAYBACK_API APaybackAICharacter : public AIGS_AIGameCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ComponentsPreInitialized OnComponentsPreInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaybackAICharactersEventsWatcher* AICharactersEventsWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BleedingHandlerComponent* BleedingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AIWorldTracingComponent* AIWorldTracingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* AimAssistCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ShootableHelmetCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootableHelmetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractionStealthKillComponent* InteractionStealthKill;
    
public:
    APaybackAICharacter(const FObjectInitializer& ObjectInitializer);

};

