#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_AkGeometry.generated.h"

class UAkGeometryComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_AkGeometry : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkGeometryComponent* AkGeometry;
    
public:
    AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer);

};

