#pragma once
#include "CoreMinimal.h"
#include "IGS_IntelBase.h"
#include "IGS_ShortcutIntel.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_ShortcutIntel : public UIGS_IntelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShortcutFound;
    
    UIGS_ShortcutIntel();

};

