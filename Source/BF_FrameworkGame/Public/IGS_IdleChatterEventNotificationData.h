#pragma once
#include "CoreMinimal.h"
#include "IGS_IdleChatterEventNotificationData.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_IdleChatterEventNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AsyncRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> Characters;
    
    FIGS_IdleChatterEventNotificationData();
};

