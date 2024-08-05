#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "AnimNotify_PlayNiagaraEffectPooled.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BF_ANIMATIONS_API UAnimNotify_PlayNiagaraEffectPooled : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UAnimNotify_PlayNiagaraEffectPooled();

};

