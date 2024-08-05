#pragma once
#include "CoreMinimal.h"
#include "EntryPoints.generated.h"

class UIGS_BreachPointComponent;

USTRUCT(BlueprintType)
struct FEntryPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* LeftNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* LeftFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* RightNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* RightFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* StackPos;
    
    BF_AI_API FEntryPoints();
};

