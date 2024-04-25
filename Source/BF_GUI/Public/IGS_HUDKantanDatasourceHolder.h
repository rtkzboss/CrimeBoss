#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HUDKantanDatasourceHolder.generated.h"

class UKantanSimpleCartesianDatasource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_HUDKantanDatasourceHolder : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKantanSimpleCartesianDatasource* PressureGraphDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PressureGraphCatId_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PressureGraphExpectedId_Value;
    
    UIGS_HUDKantanDatasourceHolder(const FObjectInitializer& ObjectInitializer);

};

