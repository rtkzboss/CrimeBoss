#pragma once
#include "CoreMinimal.h"
#include "IGS_TutorialPage.generated.h"

class UBinkMediaPlayer;
class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_TutorialPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* Video;
    
    FIGS_TutorialPage();
};

