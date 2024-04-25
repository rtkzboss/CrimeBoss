#include "IGS_BadFlyGameplayStaticsFramework.h"

UIGS_BadFlyGameplayStaticsFramework::UIGS_BadFlyGameplayStaticsFramework() {
}

bool UIGS_BadFlyGameplayStaticsFramework::WasComponentRecentlyRenderedOnScreen(const UPrimitiveComponent* inPrimitiveComponent, float inTolerance) {
    return false;
}

void UIGS_BadFlyGameplayStaticsFramework::UpdateLevelTransitionState(UObject* inWCO, EIGS_LevelTransitionType inState) {
}

void UIGS_BadFlyGameplayStaticsFramework::TogglePSOBatching(bool InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::SwitchSKU(EIG_PS5SKU& outSKU) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetVolumetricFogCommandVariables(const FString& inEnabled, const FString& inDepthDistributionScale, const FString& inGridPixelSize, const FString& inGridSizeZ, const FString& inHistoryMissSupersampleCount, const FString& inHistoryWeight, const FString& inInjectShadowedLightsSeparately, const FString& inInverseSquaredLightDistanceBiasScale, const FString& inJitter, const FString& inLightFunctionSupersampleScale, const FString& inTemporalReprojection, const FString& inVoxelizationShowOnlyPassIndex) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetTranslucencyCommandVariables(const FString& inTranslucencyLightingVolumeDim, const FString& inTranslucencyLightingVolumeInnerDistance, const FString& inTranslucencyLightingVolumeOuterDistance, const FString& inTranslucencyVolumeBlur) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetStartWithTickEnabled(UActorComponent* InComponent, bool InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetPSOBatchingToBackgroundMode() {
}

void UIGS_BadFlyGameplayStaticsFramework::SetNotWorldShadows(UPrimitiveComponent* InComponent, bool inSelfShadowOnly) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetIsPlayerSpawnEnabled(UObject* inWCO, bool InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetCustomDepthStencilOnLandscape(ALandscape* inLandscape, ERendererStencilMask inStencilMask, int32 InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetCommandVariableRevertible(const FString& inVariable, const FString& InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::SetCastDynamicShadowsEnabled(ULightComponentBase* inLight, bool InValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::RestoreRevertibleCommandVariables() {
}

UTexture2D* UIGS_BadFlyGameplayStaticsFramework::RenderTargetCreateStaticTexture2DEditorOnlyToSameFile(UTextureRenderTarget2D* RenderTarget, const FString& Name, const FString& InPath, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings) {
    return NULL;
}

void UIGS_BadFlyGameplayStaticsFramework::PrintExtraSessionSettings(FBlueprintSessionResult SessionResult) {
}

void UIGS_BadFlyGameplayStaticsFramework::MakeTouchEventForAI(UObject* inWCO, AActor* inTouchReceiver, AActor* inOtherActor, const FVector& inEventLocation) {
}

FSessionsSearchSetting UIGS_BadFlyGameplayStaticsFramework::MakeStringSessionSearchProperty(const EIGS_SessionPropertyKey Key, const FString& Value, EOnlineComparisonOpRedux ComparisonOp) {
    return FSessionsSearchSetting{};
}

FSessionPropertyKeyPair UIGS_BadFlyGameplayStaticsFramework::MakeStringSessionProperty(const EIGS_SessionPropertyKey Key, const FString& Value) {
    return FSessionPropertyKeyPair{};
}

void UIGS_BadFlyGameplayStaticsFramework::MakeNoiseForAI(FVector inNoiseLocation, float inLoudness, AActor* inInstigator, float inMaxRange, FName inTag) {
}

bool UIGS_BadFlyGameplayStaticsFramework::IsProcessingSessionInvite(const UObject* inWCO) {
    return false;
}

bool UIGS_BadFlyGameplayStaticsFramework::IsPlayerOwnerOfSession(const FBPUniqueNetId& PlayerToCheck, const FBlueprintSessionResult& Result) {
    return false;
}

bool UIGS_BadFlyGameplayStaticsFramework::IsNetDriverReady(const UObject* inWCO) {
    return false;
}

bool UIGS_BadFlyGameplayStaticsFramework::IsMultiplayerSessionInValidState(const UObject* inWCO) {
    return false;
}

bool UIGS_BadFlyGameplayStaticsFramework::IsMultiplayerSessionCreationInProgress(const UObject* inWCO) {
    return false;
}

void UIGS_BadFlyGameplayStaticsFramework::GetStringSessionProperty(const TArray<FSessionPropertyKeyPair>& ExtraSettings, const EIGS_SessionPropertyKey Key, ESessionSettingSearchResult& SearchResult, FString& SettingValue) {
}

void UIGS_BadFlyGameplayStaticsFramework::GetSessionPropertyInt64(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int64& SettingValue) {
}

AActor* UIGS_BadFlyGameplayStaticsFramework::GetRandomActorWithGameplayTagAndRandomStream(UObject* inWCO, FGameplayTag inGameplayTag, UIGS_RandomStreamHolder* inRandomStreamHolder) {
    return NULL;
}

AActor* UIGS_BadFlyGameplayStaticsFramework::GetRandomActorWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag) {
    return NULL;
}

FString UIGS_BadFlyGameplayStaticsFramework::GetProjectVersion() {
    return TEXT("");
}

FString UIGS_BadFlyGameplayStaticsFramework::GetOnlyRevisionNumber() {
    return TEXT("");
}

int32 UIGS_BadFlyGameplayStaticsFramework::GetMaxPlayers(const FBlueprintSessionResult& Result) {
    return 0;
}

bool UIGS_BadFlyGameplayStaticsFramework::GetIsJapaneseSku() {
    return false;
}

EIGS_AIHitReactionVariant UIGS_BadFlyGameplayStaticsFramework::GetHitReactionVariant(FVector inHitDir, AIGS_GameCharacterFramework* inGameCharacter) {
    return EIGS_AIHitReactionVariant::SO_Unknown;
}

AActor* UIGS_BadFlyGameplayStaticsFramework::GetFirstActorWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag) {
    return NULL;
}

FVector UIGS_BadFlyGameplayStaticsFramework::GetCurrentInterestPointLocation(FIGS_InterestPointHolder inInterestPoint) {
    return FVector{};
}

TArray<AActor*> UIGS_BadFlyGameplayStaticsFramework::GetAllActorsWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag) {
    return TArray<AActor*>();
}

FVector UIGS_BadFlyGameplayStaticsFramework::GetActorBoundsCenter(const AActor* inActor) {
    return FVector{};
}

bool UIGS_BadFlyGameplayStaticsFramework::DoesMultiplayerSessionExist(const UObject* inWCO) {
    return false;
}

FIGS_InterestPointHolder UIGS_BadFlyGameplayStaticsFramework::CreateInterestPointFromLocation(FVector InLocation) {
    return FIGS_InterestPointHolder{};
}

FIGS_InterestPointHolder UIGS_BadFlyGameplayStaticsFramework::CreateInterestPointFromActor(AActor* inActor, FVector inOffset) {
    return FIGS_InterestPointHolder{};
}

FIGS_InterestPointHolder UIGS_BadFlyGameplayStaticsFramework::CreateEmptyInterestPoint() {
    return FIGS_InterestPointHolder{};
}

void UIGS_BadFlyGameplayStaticsFramework::ClearSessionResultData(FBlueprintSessionResult& SessionResult) {
}


