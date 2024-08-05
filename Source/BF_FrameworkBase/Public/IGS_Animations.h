#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_Animations.generated.h"

class ACharacter;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_Animations : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_Animations();

    UFUNCTION(BlueprintCallable)
    static void StopAnimMontageOnMesh(const USkeletalMeshComponent* MeshComponent, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static void StopAnimMontage(const ACharacter* Character, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimMontageSectionOnMesh(const USkeletalMeshComponent* MeshComponent, FName SectionNameToChange, FName NextSection, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimMontageSection(const ACharacter* Character, FName SectionNameToChange, FName NextSection, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static void PlayAnimMontageOnMesh(const USkeletalMeshComponent* MeshComponent, UAnimMontage* AnimMontage, float& OutLength, float& OutDuration, float InPlayRate, FName StartSectionName, float inStartPosition);
    
    UFUNCTION(BlueprintCallable)
    static void PlayAnimMontage(const ACharacter* Character, UAnimMontage* AnimMontage, float& OutLength, float& OutDuration, float InPlayRate, FName StartSectionName, float inStartPosition);
    
};

