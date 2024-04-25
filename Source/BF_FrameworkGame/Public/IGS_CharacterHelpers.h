#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_CharacterHelpers.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_CharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_CharacterHelpers();

    UFUNCTION(BlueprintCallable)
    static bool SetMovementSpeed(AIGS_GameCharacterFramework* inCharacter, EIGS_Speed speedType);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Speed GetMovementSpeed(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FString GetActiveNodeName(AIGS_GameCharacterFramework* inCharacter);
    
};

