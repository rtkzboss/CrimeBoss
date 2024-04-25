#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadNavLinksBreachIn.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadNavLinksBreachIn : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> BreachingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> AllreadyBreachedMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> WaitingForBreachMembers;
    
public:
    UIGS_BTTask_SquadNavLinksBreachIn();

};

