#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_BasherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BasherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponBashAttackDefinition BashAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponBashAttackDefinition AIAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
public:
    UIGS_BasherComponent(const FObjectInitializer& ObjectInitializer);

};

