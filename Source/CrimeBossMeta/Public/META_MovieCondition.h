#pragma once
#include "CoreMinimal.h"
#include "META_MediaCondition.h"
#include "META_MovieCondition.generated.h"

class UBinkMediaPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MovieCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlreadyPlayingMovie;
    
public:
    UMETA_MovieCondition();

};

