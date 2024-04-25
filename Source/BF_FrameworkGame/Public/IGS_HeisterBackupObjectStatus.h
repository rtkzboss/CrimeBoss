#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatus.h"
#include "IGS_HeisterBackupObjectStatus.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_HeisterBackupObjectStatus : public UIGS_ObjectStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMultiplierAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenDelayAttribute;
    
    UIGS_HeisterBackupObjectStatus(const FObjectInitializer& ObjectInitializer);

};

