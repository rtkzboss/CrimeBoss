#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerFPVArmsFramework.h"
#include "IGS_WieldAnyItemInterface.h"
#include "IGS_PlayerFPVArms.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerFPVArms : public AIGS_PlayerFPVArmsFramework, public IIGS_WieldAnyItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveArmsInCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateArmsPitchInCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepArmsAtFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmsGrabLadderRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftHandAttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightHandAttachedActor;
    
    AIGS_PlayerFPVArms(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetArmsTickEnabled(bool Enabled);
    

    // Fix for true pure virtual functions not being implemented
};

