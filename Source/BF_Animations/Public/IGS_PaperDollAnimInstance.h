#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "IGS_PaperDollAnimInstance.generated.h"

class AIGS_CharacterPaperDoll;

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_PaperDollAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaCutsceneCharacterPose CurrentCharacterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot HeadSnapshot;
    
    UIGS_PaperDollAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_CharacterPaperDoll* GetOwningPaperDoll() const;
    
};

