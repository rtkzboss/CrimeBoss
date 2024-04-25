#include "CustomizableObjectInstance.h"

UCustomizableObjectInstance::UCustomizableObjectInstance() {
    this->CustomizableObject = NULL;
    this->SkeletalMesh = NULL;
    this->bBuildParameterDecorations = false;
}

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority) {
}

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const FString& VectorParamName, FLinearColor VectorValue) {
}

void UCustomizableObjectInstance::SetRandomValues() {
}

void UCustomizableObjectInstance::SetProjectorValue(const FString& ProjectorParamName, const FVector& Pos, const FVector& Direction, const FVector& Up, const FVector& Scale, float Angle, int32 RangeIndex) {
}

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const FString& ParamName, const FString& SelectedOptionName, int32 RangeIndex) {
}

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const FString& FloatParamName, float FloatValue, int32 RangeIndex) {
}

bool UCustomizableObjectInstance::SetCustomizationFromArchive(FIGS_CustomizationArchive inArchive) {
    return false;
}

void UCustomizableObjectInstance::SetCurrentState(const FString& StateName) {
}

void UCustomizableObjectInstance::SetColorParameterSelectedOption(const FString& ColorParamName, FLinearColor ColorValue) {
}

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const FString& BoolParamName, bool BoolValue) {
}

int32 UCustomizableObjectInstance::RemoveValueFromProjectorRange(const FString& ParamName) {
    return 0;
}

int32 UCustomizableObjectInstance::RemoveValueFromIntRange(const FString& ParamName) {
    return 0;
}

int32 UCustomizableObjectInstance::RemoveValueFromFloatRange(const FString& ParamName) {
    return 0;
}

bool UCustomizableObjectInstance::IsParamMultidimensional(const FString& ParamName) const {
    return false;
}

bool UCustomizableObjectInstance::IsParameterRelevant(const FString& ParamName) const {
    return false;
}

void UCustomizableObjectInstance::GetProjectorValue(const FString& ProjectorParamName, FVector& Pos, FVector& Direction, FVector& Up, FVector& Scale, float& Angle, ECustomizableObjectProjectorType& Type, int32 RangeIndex) const {
}

FVector UCustomizableObjectInstance::GetProjectorUp(const FString& ParamName, int32 RangeIndex) const {
    return FVector{};
}

FVector UCustomizableObjectInstance::GetProjectorScale(const FString& ParamName, int32 RangeIndex) const {
    return FVector{};
}

FVector UCustomizableObjectInstance::GetProjectorPosition(const FString& ParamName, int32 RangeIndex) const {
    return FVector{};
}

ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(const FString& ParamName, int32 RangeIndex) const {
    return ECustomizableObjectProjectorType::Planar;
}

FVector UCustomizableObjectInstance::GetProjectorDirection(const FString& ParamName, int32 RangeIndex) const {
    return FVector{};
}

float UCustomizableObjectInstance::GetProjectorAngle(const FString& ParamName, int32 RangeIndex) const {
    return 0.0f;
}

UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const FString& ParamName, int32 DescIndex) {
    return NULL;
}

FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const FString& ParamName, int32 RangeIndex) const {
    return TEXT("");
}

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const FString& FloatParamName, int32 RangeIndex) const {
    return 0.0f;
}

FIGS_CustomizationArchive UCustomizableObjectInstance::GetCustomizationArchive() {
    return FIGS_CustomizationArchive{};
}

FString UCustomizableObjectInstance::GetCurrentState() const {
    return TEXT("");
}

FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(const FString& ColorParamName) const {
    return FLinearColor{};
}

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const FString& BoolParamName) const {
    return false;
}

int32 UCustomizableObjectInstance::FindVectorParameterNameIndex(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObjectInstance::FindProjectorParameterNameIndex(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObjectInstance::FindIntParameterNameIndex(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObjectInstance::FindFloatParameterNameIndex(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObjectInstance::FindBoolParameterNameIndex(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObjectInstance::CurrentParamRange(const FString& ParamName) const {
    return 0;
}

UCustomizableObjectInstance* UCustomizableObjectInstance::CloneStatic(UObject* Outer) {
    return NULL;
}

UCustomizableObjectInstance* UCustomizableObjectInstance::Clone() {
    return NULL;
}

int32 UCustomizableObjectInstance::AddValueToProjectorRange(const FString& ParamName) {
    return 0;
}

int32 UCustomizableObjectInstance::AddValueToIntRange(const FString& ParamName) {
    return 0;
}

int32 UCustomizableObjectInstance::AddValueToFloatRange(const FString& ParamName) {
    return 0;
}


