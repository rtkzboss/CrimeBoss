#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "META_GraphStruct.h"
#include "META_Graph.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_Graph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GraphStruct Details;
    
    UMETA_Graph();

};

