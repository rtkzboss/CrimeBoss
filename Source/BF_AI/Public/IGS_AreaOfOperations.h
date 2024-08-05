#pragma once
#include "CoreMinimal.h"
#include "IGS_AreaOfOperations.generated.h"

class AIGS_RoomBase;

USTRUCT(BlueprintType)
struct FIGS_AreaOfOperations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> AreaOfOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> AllowedPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_RoomBase* LastStartingRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    BF_AI_API FIGS_AreaOfOperations();
};

