#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_VentShaftAnimations.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_VentShaftAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* m_Character;
    
public:
    UIGS_VentShaftAnimations();

};

