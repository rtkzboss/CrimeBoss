#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_CoverPointActor.generated.h"

class UCoverPoint;
class UIGS_AICommand;
class UIGS_CoverPointComponent;
class UIGS_CoverPointComponentsManager;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_CoverPointActor : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CoverPointComponent* CoverPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CoverPointComponentsManager* CoverPointComponentsManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_AICommand> m_CurrentCommand;
    
public:
    AIGS_CoverPointActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCoverPoint* GetCoverPoint() const;
    
};

