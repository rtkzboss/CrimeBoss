#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerCharacter.h"
#include "PaybackPlayerCharacter.generated.h"

class UIGS_NetworkComponentAnimation;
class UIGS_NetworkComponentCharacter;

UCLASS(Blueprintable)
class PAYBACK_API APaybackPlayerCharacter : public AIGS_PlayerCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentAnimation* NetworkAnimation;
    
public:
    APaybackPlayerCharacter(const FObjectInitializer& ObjectInitializer);

};

