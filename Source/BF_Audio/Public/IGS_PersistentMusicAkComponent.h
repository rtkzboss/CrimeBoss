#pragma once
#include "CoreMinimal.h"
#include "IGS_PersistentAkComponent.h"
#include "IGS_PersistentMusicAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AUDIO_API UIGS_PersistentMusicAkComponent : public UIGS_PersistentAkComponent {
    GENERATED_BODY()
public:
    UIGS_PersistentMusicAkComponent(const FObjectInitializer& ObjectInitializer);

};

