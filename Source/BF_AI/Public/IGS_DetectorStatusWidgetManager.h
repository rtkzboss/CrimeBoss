#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "IGS_DetectorStatusWidgetManager.generated.h"

class AActor;
class AIGS_DetectorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_DetectorStatusWidgetManager : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_DetectorBase* DetectorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDetecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WalkieTalkieStatus WalkieTalkieStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UIGS_DetectorStatusWidgetManager(const FObjectInitializer& ObjectInitializer);

};

