#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AfraidOfDanger.h"
#include "DangerArea.h"
#include "IGS_DangerManager.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_DangerManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerArea> m_DangerAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAfraidOfDanger> m_AfraidOfDanger;
    
public:
    UIGS_DangerManager();

};

