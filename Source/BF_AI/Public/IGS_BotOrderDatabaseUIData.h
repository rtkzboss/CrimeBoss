#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderDatabaseUIData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_BotOrderDatabaseUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionName;
    
    FIGS_BotOrderDatabaseUIData();
};

