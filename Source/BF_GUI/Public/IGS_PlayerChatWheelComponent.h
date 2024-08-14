#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_PlayerChatWheelComponent.generated.h"

class UIGS_GameUISettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_PlayerChatWheelComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GameUISettings* m_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SpamPreventionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ActionsTimestampsQueue;
    
public:
    UIGS_PlayerChatWheelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowSpamPreventionMessage();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HandleChatWheelReaction(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleChatWheelReaction(FGameplayTag inTag);
    
};

