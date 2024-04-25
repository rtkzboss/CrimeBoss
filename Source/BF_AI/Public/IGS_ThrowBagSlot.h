#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_OnSlotReachedDelegate.h"
#include "IGS_ThrowBagSlot.generated.h"

class AIGS_GameCharacterFramework;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UIGS_ThrowBagSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSlotReached OnSlotReached;
    
    UIGS_ThrowBagSlot();

    UFUNCTION(BlueprintCallable)
    void ReportSlotReached(AIGS_GameCharacterFramework* inCharacter);
    
};

