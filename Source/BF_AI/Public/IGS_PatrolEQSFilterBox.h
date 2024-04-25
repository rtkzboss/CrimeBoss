#pragma once
#include "CoreMinimal.h"
#include "IGS_BoxSphere.h"
#include "GameplayTagContainer.h"
#include "IGS_PatrolEQSFilterBox.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_PatrolEQSFilterBox : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FiltersByTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidTeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EQSFilteringTags;
    
    AIGS_PatrolEQSFilterBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDebugSubsystemSettings();
    
};

