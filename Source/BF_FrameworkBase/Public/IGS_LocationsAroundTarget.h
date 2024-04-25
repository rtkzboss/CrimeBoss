#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_LocationsAroundTarget.generated.h"

class UIGS_CharacterData;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_LocationsAroundTarget : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_CharacterData> OwnerCharacterData;
    
public:
    UIGS_LocationsAroundTarget();

};

