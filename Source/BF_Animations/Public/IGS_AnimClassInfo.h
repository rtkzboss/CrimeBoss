#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimClassInfo.generated.h"

class AIGS_WieldableBase;

USTRUCT(BlueprintType)
struct FIGS_AnimClassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_WieldableBase> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ArmsAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CharacterAnimClass;
    
    BF_ANIMATIONS_API FIGS_AnimClassInfo();
};

