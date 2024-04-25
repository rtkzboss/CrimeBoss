#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "META_PerkParameters.h"
#include "IGS_GameplayEffect_PerkMeta.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_GameplayEffect_PerkMeta : public UIGS_GameplayEffect_PerkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PerkParameters Parameters;
    
    UIGS_GameplayEffect_PerkMeta();

};

