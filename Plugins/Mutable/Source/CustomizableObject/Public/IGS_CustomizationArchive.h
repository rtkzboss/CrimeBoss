#pragma once
#include "CoreMinimal.h"
#include "IGS_CustomizationArchive.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CustomizationArchive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> StoredArchive;
    
    CUSTOMIZABLEOBJECT_API FIGS_CustomizationArchive();
};

