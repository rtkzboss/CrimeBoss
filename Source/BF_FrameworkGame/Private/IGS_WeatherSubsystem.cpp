#include "IGS_WeatherSubsystem.h"
#include "Materials/MaterialParameterCollection.h"

UIGS_WeatherSubsystem::UIGS_WeatherSubsystem() {
    static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> gen0(TEXT("/Game/00_Main/MaterialLibrary/Enviro/Weather/MPC_Weather.MPC_Weather"));
    (*this).WeatherMPC = gen0.Object;
}

void UIGS_WeatherSubsystem::UpdateWeather() {
}

void UIGS_WeatherSubsystem::SetupWeather(FIGS_WeatherConfig inWeatherConfig) {
}

void UIGS_WeatherSubsystem::SetupVisualStyleOverride(FIGS_VisualStyleConfig inVisualStyleConfig) {
}

void UIGS_WeatherSubsystem::PostProcessVolumeEndOverlap(APostProcessVolume* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor) {
}

void UIGS_WeatherSubsystem::PostProcessVolumeBeginOverlap(APostProcessVolume* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor) {
}

void UIGS_WeatherSubsystem::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_WeatherSubsystem::OnWieldableBeginChange(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_WeatherSubsystem::EnvironmentVolumeEndOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor) {
}

void UIGS_WeatherSubsystem::EnvironmentVolumeBeginOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor) {
}

void UIGS_WeatherSubsystem::EnableWeather() {
}

void UIGS_WeatherSubsystem::DisableWeather() {
}


