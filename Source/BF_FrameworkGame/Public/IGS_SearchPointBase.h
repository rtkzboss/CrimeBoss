#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SearchPointBase.generated.h"

class UIGS_SearchPointComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SearchPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SearchPointComponent* SearchPointComponent;
    
    AIGS_SearchPointBase(const FObjectInitializer& ObjectInitializer);

};

