#include "IGS_ToolFunctionLibrary.h"

UIGS_ToolFunctionLibrary::UIGS_ToolFunctionLibrary() {
}

void UIGS_ToolFunctionLibrary::SetRenderInDepthPass(UPrimitiveComponent* InComponent, bool InValue) {
}

bool UIGS_ToolFunctionLibrary::IsEOSOnlineSubsystemActive(const UObject* inWCO) {
    return false;
}

FString UIGS_ToolFunctionLibrary::GetRegionCodeFromLocation(const FString& CountryCode, const FString& RegionCode, const FString& City) {
    return TEXT("");
}

TArray<FString> UIGS_ToolFunctionLibrary::GetRecentLevels() {
    return TArray<FString>();
}

int32 UIGS_ToolFunctionLibrary::EvaluateGeoLocation(const FString& LocalRegion, const FString& RemoteRegion) {
    return 0;
}


