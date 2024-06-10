#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_Anim4Sides.h"
#include "IGS_AnimationHelpers.generated.h"

class AIGS_GameCharacterFramework;
class UAnimInstance;
class UAnimMontage;
class UIGS_PlayerAnimInstance;
class UIGS_UArmsAniminstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimationHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AnimationHelpers();

    UFUNCTION(BlueprintCallable)
    static void StopAllMontages(UAnimInstance* inAnimInstance, float inBlendOut);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PlayerAnimInstance* GetPlayerAnimInstance(UPARAM(const) AIGS_GameCharacterFramework*& inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeleePushMontages(UPARAM(const) AIGS_GameCharacterFramework*& inCharacter, UAnimMontage*& outCharacterFPP, UAnimMontage*& outCharacterTPP, UAnimMontage*& outWeaponFPP);

    UFUNCTION(BlueprintCallable)
    static UIGS_UArmsAniminstance* GetArmsAnimInstance(UPARAM(const) AIGS_GameCharacterFramework*& inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Anim4Sides GetAnimationSideForAngle(float inAngle);
    
};

