#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PropGenerator.generated.h"

class UIGS_PropLogicComponent;
class USceneComponent;

UCLASS(Blueprintable)
class PAYBACK_API AIGS_PropGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PropLogicComponent* m_PropLogicComponent;
    
public:
    AIGS_PropGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PropLogicComponent* GetLogicComponent() const;
    
};

