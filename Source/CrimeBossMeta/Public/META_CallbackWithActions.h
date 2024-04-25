#pragma once
#include "CoreMinimal.h"
#include "META_BaseCallback.h"
#include "META_CallbackWithActions.generated.h"

class UMETA_BaseAction;
class UMETA_BaseCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_CallbackWithActions : public UMETA_BaseCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseAction*> TrueActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseAction*> FalseActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNode;
    
public:
    UMETA_CallbackWithActions();

};

