#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "IGS_DebugCheatManager.generated.h"

UCLASS(Blueprintable)
class BF_DEBUG_API UIGS_DebugCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UIGS_DebugCheatManager();

    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_WeaponVisibilityDraw(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Weapons(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_VehiclesDisabled(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_VarDump(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_UseOldDetectionMeter(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_UseMaxLevelUniqueCharacter(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_TrafficSystem(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_TrafficNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ToggleSessionInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_TogglePressureGraph() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ToggleMovementSpeedDebug() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ToggleFPVDebugView() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ToggleDebugMenu() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ToggleDebugCrosshair() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Toggle3PVCamera() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ThrowGas() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ThrowFrag() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ThrowFlash() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Throwables(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_TacticalNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_SwatAIDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_SpawnSWAT(int32 inCount) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_SpawnPointsVisibleInPIE(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_SpawnHeister(int32 inCount) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Spawn(const FString& inTeamSide, const FString& inSpecialization, int32 inCount) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Sound(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowVisibilityValue(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowSpawnPoints(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowObstacles(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowFear(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowEnemyHealth(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowEnemies(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowDetectionValue(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowDangerEvents(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ShowCovers(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_SessionRevisionCheck(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_RoomNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_RoomCapacity(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ReloadWeaponDatabase(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_RandomizeWeaponSkins(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PrintAim() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PressureSpawnIntensityEnabled(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PressureDebugGraph(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PressureDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PopulatorSolutionLocation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PolysWithoutRoom(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerWeaponShootingTrace(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerUseComponent(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerSuppression(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerScanComponent(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerPosition(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerInput(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerHealth(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerDamageReceivedDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PlayerCrosshairEnabled(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Ping(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PatrolPointsVisibleInPIE(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PatrolPointsLoggingVerbose(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PatrolPointsLogging(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PatrolPoints(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_PathFollowNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_NPCDirectionArrows(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Navigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Names(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_MutableInfo(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_MetaHumanAI(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_MeleeWeaponTrace(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_MarkTemporary(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_MarkMutable(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_KillStrikeDisabled(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_KillHeartbeat(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_KillControlRadio(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_KillCameras(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_KillAlarmButtons(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_HumanPolys(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_HeisterBarksDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ForceHideDebugInfo(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ForceFullHud(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_FootIK(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_FloatingDamageNumbers(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_FightNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_EnableFullFriendlyFire(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DrawSuspicion(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DisableTracerEffects(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DisableSpread(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DisableRecoil(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DisableAimAssist(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DialoguesDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_DebugSounds(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Damage(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ConnectionPointsVisibleInPIE(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Buddha(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_BlockHealthRegen(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AvoidanceNavigation(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AutomaticLeanVisualization(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AssetsPreloaderLogging(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AssetsPreloader(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_ArmsAnimations(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_Animations(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AllowRespawn(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AllDamageReceivedDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_All(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AlarmEnabled(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AkEventWorld(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AkEventList(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AIWeaponShootingTrace(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AIVisionShapes(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AIVisibilityTrace(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AimAssistDebug(bool inOn) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Debug_AIBarksDebug(bool inOn) const;
    
};

