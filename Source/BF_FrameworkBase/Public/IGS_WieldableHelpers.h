#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_WieldingHand.h"
#include "IGS_WieldableHelpers.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_WieldableHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WieldableHelpers();

    UFUNCTION(BlueprintCallable)
    static bool WieldAnyItemCustomSocket(AIGS_GameCharacterFramework* inWielder, AActor* inActorToWield, EIGS_WieldingHand inWieldingHand, FName inSocket, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    static bool WieldAnyItem(AIGS_GameCharacterFramework* inWielder, AActor* inActorToWield, EIGS_WieldingHand inWieldingHand, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveWieldedItemOfClass(AIGS_GameCharacterFramework* inWielder, TSoftClassPtr<AActor> inClassToRemove, bool inBothHands);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveWieldedItem(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inWieldingHand);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_WieldingHand GetFreeHand(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inPreferredHand);
    
    UFUNCTION(BlueprintCallable)
    static void DropWieldedItemOfClass(AIGS_GameCharacterFramework* inWielder, TSoftClassPtr<AActor> inClassToRemove, bool inBothHands);
    
    UFUNCTION(BlueprintCallable)
    static void DropWieldedItem(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inWieldingHand);
    
};

