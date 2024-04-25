#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PFPathBase.generated.h"

class UPFPathComponent;

UCLASS(Blueprintable)
class PATHFOLLOW_API APFPathBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPFPathComponent* PathToFollow;
    
    APFPathBase(const FObjectInitializer& ObjectInitializer);

};

