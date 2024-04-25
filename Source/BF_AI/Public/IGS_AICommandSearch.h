#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandSearch.generated.h"

class UIGS_SearchPointComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandSearch : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_SearchPointComponent*> PointsToSearch;
    
    UIGS_AICommandSearch();

};

