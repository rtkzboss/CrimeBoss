#pragma once
#include "CoreMinimal.h"
#include "ShoutScanData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct FShoutScanData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> WillBeShoutChars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> CanNotShoutChars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasImposibleToShoutCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCharacterForHint;
    
    BF_FRAMEWORKBASE_API FShoutScanData();
};

