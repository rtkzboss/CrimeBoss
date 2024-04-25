#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneCharacterSetup.h"
#include "IGS_MetaCutsceneCharacters.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneCharacterSetup Heister1Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneCharacterSetup Heister2Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneCharacterSetup Heister3Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneCharacterSetup Heister4Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneCharacterSetup VendorCharacter;
    
    FIGS_MetaCutsceneCharacters();
};

