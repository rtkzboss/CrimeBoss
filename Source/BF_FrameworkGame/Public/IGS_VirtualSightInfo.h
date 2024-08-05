#pragma once
#include "CoreMinimal.h"
#include "IGS_VirtualSightInfo.generated.h"

class USkeletalMeshComponent;
class USkeletalMeshSocket;
class UStaticMeshComponent;
class UStaticMeshSocket;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_VirtualSightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshSocket* VirtualSightSkeletalSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VirtualSightSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshSocket* VirtualSightStaticSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VirtualSightStaticMesh;
    
    FIGS_VirtualSightInfo();
};

