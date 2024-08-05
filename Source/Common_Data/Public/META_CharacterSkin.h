#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterSkinTableRow.h"
#include "META_BaseObject.h"
#include "META_CharacterSkin.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_CharacterSkin : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_CharacterSkin();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CharacterSkinTableRow GetCharacterSkinData();
    
};

