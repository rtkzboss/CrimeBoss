#include "IGS_WwiseFunctionLibrary.h"

UIGS_WwiseFunctionLibrary::UIGS_WwiseFunctionLibrary() {
}

void UIGS_WwiseFunctionLibrary::StopAkEventID(int32 EventID) {
}

void UIGS_WwiseFunctionLibrary::StopAkEvent(UAkComponent* AkComponent) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValueGlobalByName(const FString& Name, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValueGlobal(UAkRtpc* RTPC, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValueByName(UAkComponent* AkComponent, const FString& Name, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValueActorByName(AActor* Actor, const FString& Name, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValueActor(AActor* Actor, UAkRtpc* RTPC, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetRTPCValue(UAkComponent* AkComponent, UAkRtpc* RTPC, float Value) {
}

void UIGS_WwiseFunctionLibrary::SetMultiplePositions(UAkComponent* AkComponent, TArray<FTransform>& Positions, AkMultiPositionType PositionType) {
}

void UIGS_WwiseFunctionLibrary::SetAkSwitchByName(UAkComponent* AkComponent, const FString& Name, const FString& Value) {
}

void UIGS_WwiseFunctionLibrary::SetAkSwitchActorByName(AActor* Actor, const FString& Name, const FString& Value) {
}

void UIGS_WwiseFunctionLibrary::SetAkSwitchActor(AActor* Actor, UAkSwitchValue* SwitchValue) {
}

void UIGS_WwiseFunctionLibrary::SetAkSwitch(UAkComponent* AkComponent, UAkSwitchValue* SwitchValue) {
}

void UIGS_WwiseFunctionLibrary::SetAkStateByName(const FString& Name, const FString& Value) {
}

void UIGS_WwiseFunctionLibrary::SetAkState(UAkStateValue* StateValue) {
}

void UIGS_WwiseFunctionLibrary::SetAkComponentPosition(UAkComponent* AkComponent, FTransform& position) {
}

bool UIGS_WwiseFunctionLibrary::ResetWwise() {
    return false;
}

int32 UIGS_WwiseFunctionLibrary::PostAssociatedAkInputEvent(UAkAudioInputComponent* AkAudioInputComponent) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAssociatedAkEventWithCallback(UAkGameObject* AkGameObject, FOnAkPostEventCallback Callback, int32 CallbackMask) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAssociatedAkEvent(UAkGameObject* AkGameObject) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventWithCallback(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, FOnAkPostEventCallback Callback, int32 CallbackMask) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventWidget(UUserWidget* UserWidget, const UAkAudioEvent* Event, bool inOnlyIfVisible) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventGlobalWithCallback(AActor* Instigator, const UAkAudioEvent* Event, FOnAkPostEventCallback Callback, int32 CallbackMask) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventGlobal(AActor* Instigator, const UAkAudioEvent* Event) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventExternalSourceWithCallback(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, UAkExternalMediaAsset* Media, int32 CookieCount, FOnAkPostEventCallback Callback, int32 CallbackMask) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventExternalSource(UAkGameObject* AkGameObject, const UAkAudioEvent* Event, UAkExternalMediaAsset* Media, int32 CookieCount) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEventAtLocation(UObject* WCO, UAkAudioEvent* Event, FVector Location, FRotator Rotation) {
    return 0;
}

int32 UIGS_WwiseFunctionLibrary::PostAkEvent(UAkGameObject* AkGameObject, const UAkAudioEvent* Event) {
    return 0;
}

float UIGS_WwiseFunctionLibrary::GetRTPCValueActor(AActor* Actor, const FString& Name) {
    return 0.0f;
}

float UIGS_WwiseFunctionLibrary::GetRTPCValue(UAkComponent* AkComponent, const FString& Name) {
    return 0.0f;
}


