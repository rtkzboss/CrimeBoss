#pragma once
#include "CoreMinimal.h"
#include "IGS_SmartObjectInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_SmartObjectSimpleBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SmartObjectSimpleBase : public AActor, public IIGS_SmartObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayerBumpInto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
public:
    AIGS_SmartObjectSimpleBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

