#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_OnBulletMissCameraShakeSignatureDelegate.h"
#include "IGS_OnDirectionalPlayerCueSignatureDelegate.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_PlayerSuppressionHandlerComponent.generated.h"

class AIGS_GameCharacterBase;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuppressionHandlerComponent : public UIGS_SuppressionHandlerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnBulletMissCameraShakeSignature OnBulletMissCameraShake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDirectionalPlayerCueSignature OnPlayDirectionalPlayerCueEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DirectionalBulletWhizAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DirectionalMeleeCueAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BulletWhizAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SniperSonicCrackAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SniperSonicCrackRtpc;
    
public:
    UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayWhizSound() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void PlayDirectionalPlayerCue_Client(const AIGS_GameCharacterBase* inSourceCharacter, const EIGS_DirectionalCueType inType) const;
    
};

