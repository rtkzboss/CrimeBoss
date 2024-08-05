#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "IGS_Streaming_LevelScriptActor.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_Streaming_LevelScriptActor : public AIGS_LevelBuilder_LevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegenerateRoomNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLevelGenerator_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLevelGenerator_OnPlayBegin;
    
public:
    AIGS_Streaming_LevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LevelGenerationFinished() const;
    
};

