#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_HeisterNumberInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class PAYBACKDEFINITIONS_API UIGS_HeisterNumberInterface : public UInterface {
    GENERATED_BODY()
};

class PAYBACKDEFINITIONS_API IIGS_HeisterNumberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetHeisterNumber(int32 inHeisterNumber) PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetHeisterNumber() const PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

