#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_ActionsNode_SG.generated.h"

class UMETA_BaseAction;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ActionsNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseAction*> Actions;
    
    UMETA_ActionsNode_SG();

};

