#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AreaOfOperations.h"
#include "IGS_AreaOfOperationsComponent.generated.h"

class AIGS_RoomBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AreaOfOperationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AreaOfOperations> AreaOfOperations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> EmptyArray;
    
public:
    UIGS_AreaOfOperationsComponent(const FObjectInitializer& ObjectInitializer);

};

