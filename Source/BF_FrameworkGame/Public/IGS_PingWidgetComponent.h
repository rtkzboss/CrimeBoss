#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "IGS_PingWidgetComponent.generated.h"

class UIGS_PingableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PingWidgetComponent : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PingableComponent* m_PingableComponent;
    
public:
    UIGS_PingWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

