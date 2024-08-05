#pragma once
#include "CoreMinimal.h"
#include "EIGS_SignificanceValue.h"
#include "GameFramework/Actor.h"
#include "IGS_AkActor.generated.h"

class UAkComponent;
class UIGS_SignificanceComponent;

UCLASS(Blueprintable)
class BF_AUDIOBASE_API AIGS_AkActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SignificanceComponent* SignificanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AIGS_AkActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetAkComponent() const;
    
};

