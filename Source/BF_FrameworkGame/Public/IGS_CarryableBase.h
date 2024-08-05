#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableBase.generated.h"

class AActor;
class UIGS_CarryableInventoryObject;
class UIGS_SkinHandlerBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_CarryableBase : public AIGS_WieldableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SkinHandlerBase* SkinHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_CarryableInventoryObject> CarryableInventoryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PickupClassReference;
    
public:
    AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer);

};

