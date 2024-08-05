#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "BPSteamGroupOfficer.generated.h"

USTRUCT(BlueprintType)
struct FBPSteamGroupOfficer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUniqueNetId OfficerUniqueNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwner;
    
    ADVANCEDSTEAMSESSIONS_API FBPSteamGroupOfficer();
};

