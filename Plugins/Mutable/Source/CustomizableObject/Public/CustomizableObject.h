#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectIdPair.h"
#include "CustomizableObjectMeshToMeshVertData.h"
#include "ECustomizableObjectRelevancy.h"
#include "EMutableParameterType.h"
#include "MorphTargetInfo.h"
#include "MorphTargetVertexData.h"
#include "MutableModelImageProperties.h"
#include "MutableModelParameterProperties.h"
#include "ParameterTags.h"
#include "ParameterUIData.h"
#include "CustomizableObject.generated.h"

class UClothSharedConfigCommon;
class UClothingAssetCommon;
class UCustomizableObjectInstance;
class UMaterialInterface;
class UMutableMaskOutCache;
class UPhysicsAsset;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECT_API UCustomizableObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ReferenceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ReferenceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizableObjectRelevancy Relevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTextureLayoutManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMutableModelImageProperties> ImageProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCustomizableObjectIdPair> GroupNodeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorphTargetInfo> ContributingMorphTargetsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorphTargetVertexData> MorphTargetReconstructionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClothSharedConfigCommon*> ClothSharedConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClothingAssetCommon*> ContributingClothingAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMutableModelParameterProperties> ParameterProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FParameterUIData> ParameterUIDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FParameterUIData> StateUIDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChildObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomizableObjectClassTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PopulationClassTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FParameterTags> CustomizableObjectParametersTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMutableMaskOutCache* MaskOutCache_HardRef;
    
public:
    UCustomizableObject();

    UFUNCTION(BlueprintCallable)
    void UnloadMaskOutCache();
    
    UFUNCTION(BlueprintCallable)
    void LoadMaskOutCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParameterUIData GetStateUIMetadataFromIndex(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParameterUIData GetStateUIMetadata(const FString& StateName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateParameterName(const FString& StateName, int32 ParameterIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateParameterCount(const FString& StateName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateName(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParameterUIData GetParameterUIMetadataFromIndex(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParameterUIData GetParameterUIMetadata(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMutableParameterType GetParameterTypeByName(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMutableParameterType GetParameterType(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParameterName(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParameterDescriptionCount(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParameterCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntParameterNumOptions(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindParameter(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* CreateInstance();
    
};

