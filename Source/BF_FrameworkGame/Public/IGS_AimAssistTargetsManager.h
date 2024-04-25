#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AimAssistTargetsManager.generated.h"

class UIGS_AimAssistTargetComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AimAssistTargetsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIGS_AimAssistTargetComponent*> AimAssistTargets;
    
public:
    UIGS_AimAssistTargetsManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_AimAssistTargetComponent*> GetAllAimAssistTargetsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_AimAssistTargetComponent*> GetAllAimAssistTargets() const;
    
};

