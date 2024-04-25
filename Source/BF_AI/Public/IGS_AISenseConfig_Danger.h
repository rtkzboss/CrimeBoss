#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISenseConfig_Danger.generated.h"

class UIGS_AISense_Danger;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class BF_AI_API UIGS_AISenseConfig_Danger : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_AISense_Danger> Implementation;
    
    UIGS_AISenseConfig_Danger();

};

