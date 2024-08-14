#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_DebugSystemSettingsUpdatedEventSignatureDelegate.h"
#include "IGS_DebugSubsystem.generated.h"

class UIGS_DebugSubsystem;
class UIGS_DebugSubsystemBlueprint;
class UObject;

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=GameUserSettings)
class BF_DEBUG_API UIGS_DebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DebugSystemSettingsUpdatedEventSignature OnDebugSystemSettingsUpdatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticLeanVisualization;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WeaponVisibilityDraw;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerUseComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerScanComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowEnemies;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowEnemyHealth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowFear;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDetectionValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowVisibilityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDangerEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowObstacles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCovers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerSuppression;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Throwables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MetricsMeasure;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIVisibilityTrace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIVisionShapes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawSuspicion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerWeaponShootingTrace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIWeaponShootingTrace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeleeWeaponTrace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrafficSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AimAssistDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NPCDirectionArrows;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FootIK;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ArmsAnimations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerAnimations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLying;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerDamageReceivedDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllDamageReceivedDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerHealth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableSpread;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableRecoil;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFullFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlockHealthRegen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableTracerEffects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAimAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Buddha;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RoomNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PolysWithoutRoom;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PopulatorSolutionLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HumanPolys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FightNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PathFollowNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AvoidanceNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CoverNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TacticalNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrafficNavigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PatrolPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PatrolPointsLogging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PatrolPointsLoggingVerbose;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOldDetectionMeter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwatAIDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillCameras;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillHeartbeat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillControlRadio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillAlarmButtons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PressureDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PressureDebugGraph;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PressureSpawnIntensityEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialoguesDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialoguesDebugWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialoguesUseGenericCharacters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialoguesPlayTTS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AkEventList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AkEventWorld;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSounds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FloatingDamageNumbers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceFullHud;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RoomCapacity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DistantSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConnectionPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VehiclesDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowRespawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MarkMutable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MarkTemporary;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReloadWeaponDatabase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HeisterBarksDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIBarksDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerCrosshairEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaxLevelUniqueCharacter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomizeWeaponSkins;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMissionBagCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MetaHumanAI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceHideDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VarDump;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MutableInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DetectiveSpawnsIgnoreMeta;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SessionRevisionCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomMission;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAIGrenadeManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AssetsPreloader;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AssetsPreloaderLogging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlarmEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillStrikeDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PacketLag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PacketLagVariance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PacketLoss;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PacketJitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfiniteAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfiniteMagazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaximumDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIDamageDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIPerceptionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AILogicDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_DebugSubsystemBlueprint* DebugSubsystemBlueprint;
    
public:
    UIGS_DebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleSessionInfo();
    
    UFUNCTION(BlueprintCallable)
    void TogglePressureGraph();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMovementSpeedDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFPVDebugView();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugCrosshair();
    
    UFUNCTION(BlueprintCallable)
    void Toggle_UseCustomMission(bool inChecked);
    
    UFUNCTION(BlueprintCallable)
    void Toggle3PVCamera();
    
    UFUNCTION(BlueprintCallable)
    void ThrowGas();
    
    UFUNCTION(BlueprintCallable)
    void ThrowFrag();
    
    UFUNCTION(BlueprintCallable)
    void ThrowFlash();
    
    UFUNCTION(BlueprintCallable)
    void SpawnUnit(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpec, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSWAT(FVector InLocation, int32 inCount, bool inUseCrosshairLocation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnHeister(FVector InLocation, int32 inCount, bool inUseCrosshairLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketLoss(const UObject* inWCO, int32 inPacketLoss);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketLagVariance(const UObject* inWCO, int32 inPacketLagVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketLag(const UObject* inWCO, int32 inPacketLag);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketJitter(const UObject* inWCO, int32 inPacketLoss);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketEmulationEnabled(const UObject* inWCO, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void PrintAim();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings(bool inForceReload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_WeaponVisibilityDraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_VehiclesDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_VarDump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_UseOldDetectionMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_UseMaxLevelUniqueCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_UseCustomMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_TrafficSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_TrafficNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_Throwables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_TacticalNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_SwatAIDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_SpawnPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowVisibilityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowSpawnPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowObstacles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowMissionBagCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowFear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowEnemyHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowDetectionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowDangerEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ShowCovers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_SessionRevisionCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_RoomNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_RoomCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ReloadWeaponDatabase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_RandomizeWeaponSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PressureSpawnIntensityEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PressureDebugGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PressureDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PopulatorSolutionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PolysWithoutRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerUseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerScanComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerCrosshairEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PlayerAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_Ping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PatrolPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PatrolPointsLoggingVerbose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PatrolPointsLogging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PatrolPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_PathFollowNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_NPCDirectionArrows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MutableInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MetricsMeasure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MetaHumanAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MeleeWeaponTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MarkTemporary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_MarkMutable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_Lying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_KillStrikeDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_KillHeartbeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_KillControlRadio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_KillCameras() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_KillAlarmButtons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_HumanPolys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_HeisterBarksDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ForceHideDebugInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ForceFullHud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_FootIK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_FloatingDamageNumbers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_FightNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_EnableFullFriendlyFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DrawSuspicion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DistantSpawnPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DisableTracerEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DisableSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DisableRecoil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DisableAimAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DialoguesDebugWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DialoguesDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DetectiveSpawnsIgnoreMeta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DebugSounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_DebugAIGrenadeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_CoverNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ConnectionPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_Buddha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_BlockHealthRegen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AvoidanceNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AutomaticLeanVisualization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AssetsPreloaderLogging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AssetsPreloader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_ArmsAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AllowRespawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AllDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AlarmEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AkEventWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AkEventList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AIWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AIVisionShapes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AIVisibilityTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AimAssistDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggledOn_AIBarksDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_DebugSubsystem* Instance(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPacketLoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPacketLagVariance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPacketLag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPacketJitter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_DebugSubsystemBlueprint* GetBPDebugSubsystem() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

