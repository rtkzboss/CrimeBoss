#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "IGS_TutorialsSettings.generated.h"

class UIGS_TutorialScreen;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class CRIMEBOSSMETA_API UIGS_TutorialsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TutorialsSystemEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TutorialScreen> DefaultTutorialScreenClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TutorialScreen> DefaultVideoTutorialScreenClass;
    
    UIGS_TutorialsSettings();

};

