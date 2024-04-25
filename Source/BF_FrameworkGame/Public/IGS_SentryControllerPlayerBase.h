#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerFramework.h"
#include "IGS_SentryControllerPlayerBase.generated.h"

class AIGS_DetectorBase;
class AIGS_PlayerControllerRoot;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SentryControllerPlayerBase : public AIGS_SentryControllerFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPitch;
    
public:
    AIGS_SentryControllerPlayerBase(const FObjectInitializer& ObjectInitializer);

};

