#pragma once
#include "CoreMinimal.h"
#include "IGS_HasWeakSpotInterface.h"
#include "PaybackAICharacter.h"
#include "PaybackShielderCharacter.generated.h"

class UIGS_WeakSpotComponent;

UCLASS(Blueprintable)
class PAYBACK_API APaybackShielderCharacter : public APaybackAICharacter, public IIGS_HasWeakSpotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeakSpotComponent* m_WeakSpotComponent;
    
public:
    APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

