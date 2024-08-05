#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_DefendPointBase.h"
#include "IGS_DefendPointInitial.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_DefendPointInitial : public AIGS_DefendPointBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* AssignCharShape;
    
public:
    AIGS_DefendPointInitial(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAssignCharArea(FVector Pos) const;
    
};

