#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerFramework.h"
#include "IGS_SentryControllerBase.generated.h"

class AIGS_DetectorBase;
class UIGS_BehaviorTreeGameComponent;
class UIGS_BlackboardGameComponent;
class UIGS_SentryAggroComponent;
class UIGS_SentryMemoryComponent;
class UIGS_SentryPerceptionComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_SentryControllerBase : public AIGS_SentryControllerFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SentryMemoryComponent* Memory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SentryAggroComponent* Aggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SentryPerceptionComponent* Perception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BlackboardGameComponent* BlackboardGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BehaviorTreeGameComponent* BehaviorTreeGameComponent;
    
public:
    AIGS_SentryControllerBase(const FObjectInitializer& ObjectInitializer);

};

