#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LensFlareBase.generated.h"

class UMaterialInstanceDynamic;
class USceneComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class BF_RENDERING_API AIGS_LensFlareBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SourceBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CoreMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StreakMaterialDynamic;
    
public:
    AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostConstruction();
    
};

