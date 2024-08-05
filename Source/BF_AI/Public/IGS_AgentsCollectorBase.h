#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AgentsCollectorBase.generated.h"

class AIGS_GameCharacterFramework;
class UShapeComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AgentsCollectorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* Shape;
    
public:
    AIGS_AgentsCollectorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> Collect(EIGS_TeamSideEnum TeamSide) const;
    
};

