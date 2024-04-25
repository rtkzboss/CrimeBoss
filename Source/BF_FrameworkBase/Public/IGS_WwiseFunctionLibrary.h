#pragma once
#include "CoreMinimal.h"
#include "AkMultiPositionType.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_WwiseFunctionLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkAudioInputComponent;
class UAkComponent;
class UAkExternalMediaAsset;
class UAkGameObject;
class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_WwiseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WwiseFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAkEventID(int32 EventID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAkEvent(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueGlobalByName(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueGlobal(UAkRtpc* RTPC, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueByName(UAkComponent* AkComponent, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueActorByName(AActor* Actor, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueActor(AActor* Actor, UAkRtpc* RTPC, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(UAkComponent* AkComponent, UAkRtpc* RTPC, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetMultiplePositions(UAkComponent* AkComponent, UPARAM(Ref) TArray<FTransform>& Positions, AkMultiPositionType PositionType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkSwitchByName(UAkComponent* AkComponent, const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkSwitchActorByName(AActor* Actor, const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkSwitchActor(AActor* Actor, UAkSwitchValue* SwitchValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkSwitch(UAkComponent* AkComponent, UAkSwitchValue* SwitchValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkStateByName(const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkState(UAkStateValue* StateValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetAkComponentPosition(UAkComponent* AkComponent, UPARAM(Ref) FTransform& position);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool ResetWwise();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAssociatedAkInputEvent(UAkAudioInputComponent* AkAudioInputComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAssociatedAkEventWithCallback(UAkGameObject* AkGameObject, FOnAkPostEventCallback Callback, int32 CallbackMask);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAssociatedAkEvent(UAkGameObject* AkGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventWithCallback(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, FOnAkPostEventCallback Callback, int32 CallbackMask);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventWidget(UUserWidget* UserWidget, const UAkAudioEvent* Event, bool inOnlyIfVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventGlobalWithCallback(AActor* Instigator, const UAkAudioEvent* Event, FOnAkPostEventCallback Callback, int32 CallbackMask);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventGlobal(AActor* Instigator, const UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventExternalSourceWithCallback(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, UAkExternalMediaAsset* Media, int32 CookieCount, FOnAkPostEventCallback Callback, int32 CallbackMask);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventExternalSource(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, UAkExternalMediaAsset* Media, int32 CookieCount);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventAtLocation(UObject* WCO, UAkAudioEvent* Event, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEvent(UAkGameObject* AkGameObject, const UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static float GetRTPCValueActor(AActor* Actor, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static float GetRTPCValue(UAkComponent* AkComponent, const FString& Name);
    
};

