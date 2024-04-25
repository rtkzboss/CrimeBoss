#include "CustomizableObjectSystem.h"

UCustomizableObjectSystem::UCustomizableObjectSystem() {
    this->PreviewExternalImageProvider = NULL;
    this->DefaultInstanceLODManagement = NULL;
    this->CurrentInstanceLODManagement = NULL;
}

void UCustomizableObjectSystem::SetReleaseMutableTexturesImmediately(bool bReleaseTextures) {
}

int32 UCustomizableObjectSystem::GetTotalInstances() const {
    return 0;
}

int32 UCustomizableObjectSystem::GetTextureMemoryUsed() const {
    return 0;
}

FString UCustomizableObjectSystem::GetPluginVersion() const {
    return TEXT("");
}

int32 UCustomizableObjectSystem::GetNumPendingInstances() const {
    return 0;
}

int32 UCustomizableObjectSystem::GetNumInstances() const {
    return 0;
}

UCustomizableObjectSystem* UCustomizableObjectSystem::GetInstance() {
    return NULL;
}

int32 UCustomizableObjectSystem::GetAverageBuildTime() const {
    return 0;
}

bool UCustomizableObjectSystem::AreEnginePatchesPresent() const {
    return false;
}


