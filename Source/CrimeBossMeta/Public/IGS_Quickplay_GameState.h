#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateMenuBase.h"
#include "IGS_Quickplay_GameState.generated.h"

class UIGS_BossBackgroundManager;
class UIGS_Quickplay_ChainManagerComponent;
class UIGS_Quickplay_EconomyData;
class UIGS_SubtitleManager;
class UMETA_NotificationManagerComponent;
class UMETA_QuickPlayData;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API AIGS_Quickplay_GameState : public AIGS_GameStateMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_QuickPlayData* QuickPlayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_EconomyData* EconomyQuickData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubtitleManager* SubtitleManager;
    
    AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMETA_NotificationManagerComponent* GetNotificationManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UIGS_Quickplay_ChainManagerComponent* GetChainManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UIGS_BossBackgroundManager* GetBossBackgroundManager();
    
};

