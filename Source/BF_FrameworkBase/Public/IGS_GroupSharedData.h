#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_GroupSharedData.generated.h"

class UIGS_CharacterData;
class UIGS_LocationsAroundTarget;
class UIGS_TokenPool;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GroupSharedData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_CharacterData> OwnerCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_TokenPool* TokenPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_LocationsAroundTarget* LocationsAroundTarget;
    
public:
    UIGS_GroupSharedData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_TokenPool* GetTokenPool() const;
    
};

