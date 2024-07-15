#pragma once
#include "CoreMinimal.h"
#include "META_DialogueUIData.h"
#include "META_CutsceneUIData.h"
#include "META_MovieUIData.h"
#include "META_TextScreenUIData.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "IGS_MediaManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MediaManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_MediaManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TextScreenShoudBeShown(FMETA_TextScreenUIData TextScreenData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovieShouldBePlayed(FMETA_MovieUIData MovieData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMediaForScreen(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMediaForPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceStopBinkMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueTypeShouldBePlayed(FGameplayTag inTypeTag, FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueShouldBePlayed(FMETA_DialogueUIData DialogueData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CutsceneShouldBePlayed(FMETA_CutsceneUIData CutsceneData);
    
};

