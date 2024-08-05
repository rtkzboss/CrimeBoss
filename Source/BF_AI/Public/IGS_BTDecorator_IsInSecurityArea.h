#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_IsInSecurityArea.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_IsInSecurityArea : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomSecurityType RoomSecurityType;
    
public:
    UIGS_BTDecorator_IsInSecurityArea();

};

