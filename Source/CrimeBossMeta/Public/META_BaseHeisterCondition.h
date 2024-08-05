#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_BaseCondition.h"
#include "META_BaseHeisterCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseHeisterCondition : public UMETA_BaseCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMETA_CharacterID ConsideredHeisterID;
    
public:
    UMETA_BaseHeisterCondition();

    UFUNCTION(BlueprintCallable)
    void SetConsideredHeister(FMETA_CharacterID inHeisterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetConsideredHeister();
    
};

