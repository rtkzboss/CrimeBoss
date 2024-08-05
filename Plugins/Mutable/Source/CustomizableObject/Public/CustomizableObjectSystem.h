#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PendingReleaseSkeletalMeshInfo.h"
#include "CustomizableObjectSystem.generated.h"

class UCustomizableInstanceLODManagementBase;
class UCustomizableObjectImageProviderArray;
class UCustomizableObjectSystem;
class UTexture2D;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECT_API UCustomizableObjectSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectImageProviderArray* PreviewExternalImageProvider;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ProtectedCachedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;
    
public:
    UCustomizableObjectSystem();

    UFUNCTION(BlueprintCallable)
    void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureMemoryUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPluginVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPendingInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCustomizableObjectSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAverageBuildTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreEnginePatchesPresent() const;
    
};

