#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "IGS_WaypointConnector.generated.h"

class AIGS_WaypointBase;
class UIGS_CustomBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_WaypointConnector : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaypointBase* NextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointBase*> BackPointers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CustomBoxComponent* BoxComponent;
    
public:
    AIGS_WaypointConnector(const FObjectInitializer& ObjectInitializer);

};

