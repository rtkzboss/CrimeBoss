#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "IGS_OnCharacterSpawnedSignatureDelegate.h"
#include "IGS_BotStart.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BotStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterSpawnedSignature OnCharacterSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Compulsory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BotStartTag;
    
    AIGS_BotStart(const FObjectInitializer& ObjectInitializer);

};

