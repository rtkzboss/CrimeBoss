#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "IGS_WieldAnyItemInterface.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.h"
#include "PaperDollAbstract.h"
#include "IGS_CharacterPaperDoll.generated.h"

class AActor;
class UAkComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_CharacterPaperDoll : public APaperDollAbstract, public IIGS_WieldAnyItemInterface, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot HeadSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftHandAttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightHandAttachedActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueGroupCharacterHolder DialogueHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference HeadComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference BodyComponentReference;
    
public:
    AIGS_CharacterPaperDoll(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopDialogueVoiceInternal(const FIGS_PlayVariationData& inVariationData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVoiceVoice2DModeEnabledInternal(bool inState) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveHeadSnapshot();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetVoiceSFXInternal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDialogueVoiceInternal(const FIGS_PlayVariationData& inVariationData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingVoiceInternal(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetVoiceProgressInternal(int32 inGroupID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetHeadComp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetBodyComp();
    

    // Fix for true pure virtual functions not being implemented
};

