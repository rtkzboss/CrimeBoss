#pragma once
#include "CoreMinimal.h"
#include "FPVArmsAbstract.h"
#include "IGS_PlayerFPVArmsFramework.generated.h"

class AIGS_GameCharacterFramework;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_PlayerFPVArmsFramework : public AFPVArmsAbstract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* WieldableMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* WieldableMPCInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ArmsSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ArmsRootComponent;
    
public:
    AIGS_PlayerFPVArmsFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetOwningPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetArmsSkeletalMesh() const;
    
};

