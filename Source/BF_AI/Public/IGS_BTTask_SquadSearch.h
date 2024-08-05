#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AINotif.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_SubSquad.h"
#include "IGS_BTTask_SquadSearch.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadSearch : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SubSquad SubSquadRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SubSquad SubSquadLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovingToPlayer;
    
public:
    UIGS_BTTask_SquadSearch();

    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(EIGS_AINotif inType, AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget, FVector InPos, FVector inDir);
    
};

