#include "CustomizableObject.h"

UCustomizableObject::UCustomizableObject() {
    this->ReferenceSkeletalMesh = NULL;
    this->ReferenceStaticMesh = NULL;
    this->Relevancy = ECustomizableObjectRelevancy::All;
    this->bDisableTextureLayoutManagement = false;
    this->bIsChildObject = false;
    this->MaskOutCache_HardRef = NULL;
}

void UCustomizableObject::UnloadMaskOutCache() {
}

void UCustomizableObject::LoadMaskOutCache() {
}

FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int32 StateIndex) const {
    return FParameterUIData{};
}

FParameterUIData UCustomizableObject::GetStateUIMetadata(const FString& StateName) const {
    return FParameterUIData{};
}

FString UCustomizableObject::GetStateParameterName(const FString& StateName, int32 ParameterIndex) const {
    return TEXT("");
}

int32 UCustomizableObject::GetStateParameterCount(const FString& StateName) const {
    return 0;
}

FString UCustomizableObject::GetStateName(int32 StateIndex) const {
    return TEXT("");
}

int32 UCustomizableObject::GetStateCount() const {
    return 0;
}

FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int32 ParamIndex) const {
    return FParameterUIData{};
}

FParameterUIData UCustomizableObject::GetParameterUIMetadata(const FString& ParamName) const {
    return FParameterUIData{};
}

EMutableParameterType UCustomizableObject::GetParameterTypeByName(const FString& Name) const {
    return EMutableParameterType::None;
}

EMutableParameterType UCustomizableObject::GetParameterType(int32 ParamIndex) const {
    return EMutableParameterType::None;
}

FString UCustomizableObject::GetParameterName(int32 ParamIndex) const {
    return TEXT("");
}

int32 UCustomizableObject::GetParameterDescriptionCount(const FString& ParamName) const {
    return 0;
}

int32 UCustomizableObject::GetParameterCount() const {
    return 0;
}

int32 UCustomizableObject::GetIntParameterNumOptions(int32 ParamIndex) const {
    return 0;
}

FString UCustomizableObject::GetIntParameterAvailableOption(int32 ParamIndex, int32 K) const {
    return TEXT("");
}

int32 UCustomizableObject::FindParameter(const FString& Name) const {
    return 0;
}

UCustomizableObjectInstance* UCustomizableObject::CreateInstance() {
    return NULL;
}


