#pragma once
#include "CoreMinimal.h"
#include "EIGS_ConnectionPointTag.h"
#include "GameFramework/Actor.h"
#include "IGS_ConnectionPointBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_LEVELGENERATOR_API AIGS_ConnectionPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_ConnectionPointTag> PopulatorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectionPointTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer);

};

