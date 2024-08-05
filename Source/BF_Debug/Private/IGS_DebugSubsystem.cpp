#include "IGS_DebugSubsystem.h"

UIGS_DebugSubsystem::UIGS_DebugSubsystem() {
    (*this).DialoguesUseGenericCharacters = true;
    (*this).DialoguesPlayTTS = true;
    (*this).SessionRevisionCheck = true;
    (*this).AssetsPreloader = true;
    (*this).AssetsPreloaderLogging = true;
    (*this).AlarmEnabled = true;
}

void UIGS_DebugSubsystem::ToggleSessionInfo() {
}

void UIGS_DebugSubsystem::TogglePressureGraph() {
}

void UIGS_DebugSubsystem::ToggleMovementSpeedDebug() {
}

void UIGS_DebugSubsystem::ToggleFPVDebugView() {
}

void UIGS_DebugSubsystem::ToggleDebugMenu() {
}

void UIGS_DebugSubsystem::ToggleDebugCrosshair() {
}

void UIGS_DebugSubsystem::Toggle_UseCustomMission(bool inChecked) {
}

void UIGS_DebugSubsystem::Toggle3PVCamera() {
}

void UIGS_DebugSubsystem::ThrowGas() {
}

void UIGS_DebugSubsystem::ThrowFrag() {
}

void UIGS_DebugSubsystem::ThrowFlash() {
}

void UIGS_DebugSubsystem::SpawnUnit(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpec, int32 inCount) {
}

void UIGS_DebugSubsystem::SpawnSWAT(FVector InLocation, int32 inCount, bool inUseCrosshairLocation) {
}

void UIGS_DebugSubsystem::SpawnHeister(FVector InLocation, int32 inCount, bool inUseCrosshairLocation) {
}

void UIGS_DebugSubsystem::SetPacketLoss(const UObject* inWCO, int32 inPacketLoss) {
}

void UIGS_DebugSubsystem::SetPacketLagVariance(const UObject* inWCO, int32 inPacketLagVariance) {
}

void UIGS_DebugSubsystem::SetPacketLag(const UObject* inWCO, int32 inPacketLag) {
}

void UIGS_DebugSubsystem::SetPacketJitter(const UObject* inWCO, int32 inPacketLoss) {
}

void UIGS_DebugSubsystem::SetPacketEmulationEnabled(const UObject* inWCO, bool inEnabled) {
}

void UIGS_DebugSubsystem::SaveSettings() {
}

void UIGS_DebugSubsystem::PrintAim() {
}

void UIGS_DebugSubsystem::LoadSettings(bool inForceReload) {
}

bool UIGS_DebugSubsystem::IsToggledOn_WeaponVisibilityDraw() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_VehiclesDisabled() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_VarDump() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_UseOldDetectionMeter() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_UseMaxLevelUniqueCharacter() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_UseCustomMission() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_TrafficSystem() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_TrafficNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_Throwables() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_TacticalNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_SwatAIDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_SpawnPointsVisibleInPIE() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowVisibilityValue() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowSpawnPoints() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowObstacles() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowMissionBagCount() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowFear() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowEnemyHealth() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowEnemies() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowDetectionValue() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowDangerEvents() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ShowCovers() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_SessionRevisionCheck() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_RoomNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_RoomCapacity() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ReloadWeaponDatabase() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_RandomizeWeaponSkins() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PressureSpawnIntensityEnabled() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PressureDebugGraph() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PressureDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PopulatorSolutionLocation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PolysWithoutRoom() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerWeaponShootingTrace() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerUseComponent() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerSuppression() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerScanComponent() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerPosition() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerInput() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerHealth() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerDamageReceivedDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerCrosshairEnabled() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PlayerAnimations() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_Ping() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PatrolPointsVisibleInPIE() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PatrolPointsLoggingVerbose() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PatrolPointsLogging() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PatrolPoints() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_PathFollowNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_NPCDirectionArrows() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MutableInfo() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MetricsMeasure() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MetaHumanAI() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MeleeWeaponTrace() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MarkTemporary() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_MarkMutable() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_Lying() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_KillStrikeDisabled() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_KillHeartbeat() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_KillControlRadio() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_KillCameras() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_KillAlarmButtons() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_IsMoving() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_HumanPolys() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_HeisterBarksDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ForceHideDebugInfo() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ForceFullHud() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_FootIK() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_FloatingDamageNumbers() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_FightNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_EnableFullFriendlyFire() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DrawSuspicion() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DistantSpawnPoints() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DisableTracerEffects() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DisableSpread() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DisableRecoil() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DisableAimAssist() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DialoguesDebugWidget() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DialoguesDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DetectiveSpawnsIgnoreMeta() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DebugSounds() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_DebugAIGrenadeManager() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_CoverNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ConnectionPointsVisibleInPIE() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_Buddha() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_BlockHealthRegen() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AvoidanceNavigation() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AutomaticLeanVisualization() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AssetsPreloaderLogging() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AssetsPreloader() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_ArmsAnimations() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AllowRespawn() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AllDamageReceivedDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AlarmEnabled() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AkEventWorld() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AkEventList() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AIWeaponShootingTrace() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AIVisionShapes() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AIVisibilityTrace() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AimAssistDebug() const {
    return false;
}

bool UIGS_DebugSubsystem::IsToggledOn_AIBarksDebug() const {
    return false;
}

UIGS_DebugSubsystem* UIGS_DebugSubsystem::Instance(const UObject* inWCO) {
    return NULL;
}

int32 UIGS_DebugSubsystem::GetPacketLoss() const {
    return 0;
}

int32 UIGS_DebugSubsystem::GetPacketLagVariance() const {
    return 0;
}

int32 UIGS_DebugSubsystem::GetPacketLag() const {
    return 0;
}

int32 UIGS_DebugSubsystem::GetPacketJitter() const {
    return 0;
}

UIGS_DebugSubsystemBlueprint* UIGS_DebugSubsystem::GetBPDebugSubsystem() const {
    return NULL;
}

void UIGS_DebugSubsystem::ApplySettings() {
}


