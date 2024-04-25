#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "EOnlineComparisonOpRedux.h"
#include "ESessionSettingSearchResult.h"
#include "SessionPropertyKeyPair.h"
#include "SessionsSearchSetting.h"
#include "EIGS_LevelTransitionType.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/Texture.h"
#include "Engine/TextureDefines.h"
#include "GameplayTagContainer.h"
#include "FindSessionsCallbackProxy.h"
#include "EIGS_AIHitReactionVariant.h"
#include "EIGS_SessionPropertyKey.h"
#include "EIG_PS5SKU.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_BadFlyGameplayStaticsFramework.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class ALandscape;
class UActorComponent;
class UIGS_RandomStreamHolder;
class ULightComponentBase;
class UObject;
class UPrimitiveComponent;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_BadFlyGameplayStaticsFramework : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_BadFlyGameplayStaticsFramework();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasComponentRecentlyRenderedOnScreen(const UPrimitiveComponent* inPrimitiveComponent, float inTolerance);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateLevelTransitionState(UObject* inWCO, EIGS_LevelTransitionType inState);
    
    UFUNCTION(BlueprintCallable)
    static void TogglePSOBatching(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchSKU(EIG_PS5SKU& outSKU);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumetricFogCommandVariables(const FString& inEnabled, const FString& inDepthDistributionScale, const FString& inGridPixelSize, const FString& inGridSizeZ, const FString& inHistoryMissSupersampleCount, const FString& inHistoryWeight, const FString& inInjectShadowedLightsSeparately, const FString& inInverseSquaredLightDistanceBiasScale, const FString& inJitter, const FString& inLightFunctionSupersampleScale, const FString& inTemporalReprojection, const FString& inVoxelizationShowOnlyPassIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetTranslucencyCommandVariables(const FString& inTranslucencyLightingVolumeDim, const FString& inTranslucencyLightingVolumeInnerDistance, const FString& inTranslucencyLightingVolumeOuterDistance, const FString& inTranslucencyVolumeBlur);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartWithTickEnabled(UActorComponent* InComponent, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPSOBatchingToBackgroundMode();
    
    UFUNCTION(BlueprintCallable)
    static void SetNotWorldShadows(UPrimitiveComponent* InComponent, bool inSelfShadowOnly);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsPlayerSpawnEnabled(UObject* inWCO, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDepthStencilOnLandscape(ALandscape* inLandscape, ERendererStencilMask inStencilMask, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCommandVariableRevertible(const FString& inVariable, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastDynamicShadowsEnabled(ULightComponentBase* inLight, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreRevertibleCommandVariables();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RenderTargetCreateStaticTexture2DEditorOnlyToSameFile(UTextureRenderTarget2D* RenderTarget, const FString& Name, const FString& InPath, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings);
    
    UFUNCTION(BlueprintCallable)
    static void PrintExtraSessionSettings(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintCallable)
    static void MakeTouchEventForAI(UObject* inWCO, AActor* inTouchReceiver, AActor* inOtherActor, const FVector& inEventLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionsSearchSetting MakeStringSessionSearchProperty(const EIGS_SessionPropertyKey Key, const FString& Value, EOnlineComparisonOpRedux ComparisonOp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeStringSessionProperty(const EIGS_SessionPropertyKey Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void MakeNoiseForAI(FVector inNoiseLocation, float inLoudness, AActor* inInstigator, float inMaxRange, FName inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProcessingSessionInvite(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerOwnerOfSession(const FBPUniqueNetId& PlayerToCheck, const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNetDriverReady(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultiplayerSessionInValidState(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultiplayerSessionCreationInProgress(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void GetStringSessionProperty(const TArray<FSessionPropertyKeyPair>& ExtraSettings, const EIGS_SessionPropertyKey Key, ESessionSettingSearchResult& SearchResult, FString& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyInt64(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int64& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetRandomActorWithGameplayTagAndRandomStream(UObject* inWCO, FGameplayTag inGameplayTag, UIGS_RandomStreamHolder* inRandomStreamHolder);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetRandomActorWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetOnlyRevisionNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsJapaneseSku();
    
    UFUNCTION(BlueprintCallable)
    static EIGS_AIHitReactionVariant GetHitReactionVariant(FVector inHitDir, AIGS_GameCharacterFramework* inGameCharacter);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetFirstActorWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCurrentInterestPointLocation(FIGS_InterestPointHolder inInterestPoint);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllActorsWithGameplayTag(UObject* inWCO, FGameplayTag inGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorBoundsCenter(const AActor* inActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesMultiplayerSessionExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_InterestPointHolder CreateInterestPointFromLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_InterestPointHolder CreateInterestPointFromActor(AActor* inActor, FVector inOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_InterestPointHolder CreateEmptyInterestPoint();
    
    UFUNCTION(BlueprintCallable)
    static void ClearSessionResultData(UPARAM(Ref) FBlueprintSessionResult& SessionResult);
    
};

