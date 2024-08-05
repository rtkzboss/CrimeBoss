#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_TPP_Mutable_Speed_Animaitons.h"
#include "IGS_MutableAnimSpeedDatabase.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_MutableAnimSpeedDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPP_Mutable_Speed_Animaitons MutableSpeedAnimaitons;
    
    FIGS_MutableAnimSpeedDatabase();
};

