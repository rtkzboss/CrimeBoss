#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_SquadHelpers.generated.h"

class AIGS_SquadFramework;
class AIGS_SquadSwat;

UCLASS(Blueprintable)
class BF_AI_API UIGS_SquadHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_SquadHelpers();

    UFUNCTION(BlueprintCallable)
    static FString GetActiveNodeName(AIGS_SquadFramework* inSquadFramework);
    
    UFUNCTION(BlueprintCallable)
    static bool CanEnterNextRoom(AIGS_SquadSwat* inSquad);
    
};

