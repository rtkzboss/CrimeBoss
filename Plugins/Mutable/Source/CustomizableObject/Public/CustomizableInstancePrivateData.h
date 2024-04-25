#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GeneratedMaterial.h"
#include "GeneratedMesh.h"
#include "GeneratedTexture.h"
#include "ParameterDecorations.h"
#include "CustomizableInstancePrivateData.generated.h"

class UMaterialInterface;
class UPhysicsAsset;
class UTexture2D;

UCLASS(Blueprintable)
class UCustomizableInstancePrivateData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedMaterial> GeneratedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedMesh> GeneratedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedTexture> GeneratedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FParameterDecorations> ParameterDecorations;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UTexture2D>> TextureReuseCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> ReferencedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsAsset*> PhysicsAssetsToMerge;
    
public:
    UCustomizableInstancePrivateData();

};

