#pragma once
#include "CoreMinimal.h"
#include "IGS_DebugCheatManager.h"
#include "PaybackCheatManager.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API UPaybackCheatManager : public UIGS_DebugCheatManager {
    GENERATED_BODY()
public:
    UPaybackCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void WinMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerBotLimbo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerAlarm();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ThrowGun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportAllBotsToPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchCharacter(int32 inCharacterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAmmoBox();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetupInitDebugCommands();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxHealth(int32 inHealth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealth(int32 inHealth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameHUDEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCombatState(bool inIsCombat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelfRevive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelfDamage(float inDamage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RecModeNoHUD(bool inOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RecMode(bool inOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void QuickPerformanceCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintValidCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStartingGameplayEffects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintGameplayEffects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PingAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ping(const FString& inTeamSide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformanceCheck(int32 inFrames);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NeverEnd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MuteSounds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MuteMusic();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeSize(float InSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MaximumDamage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillEnemies();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillBots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillBackupHeisters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteMagazines();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Gulliver();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FullHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FullAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceTortillaBlend(float inWeight);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceRefreshEquipment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FocusPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FailMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipmentCharges(int32 inCharges);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ensure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DownSelf();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAIPerception();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAILogic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAIDamage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyLensFlares();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyBreakableGlasses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSelectedAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugOffencePanic(bool inOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugOffenceDuty(bool inOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugOffenceDetection(bool inOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Crash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckActorsOutsideBounds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ArtMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddStrikes(int32 inCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateDamageLimiter(int32 inType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbortMission();
    
};

