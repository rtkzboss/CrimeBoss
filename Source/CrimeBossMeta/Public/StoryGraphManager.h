#pragma once
#include "CoreMinimal.h"
#include "META_BaseStoryGraphManager.h"
#include "StoryGraphManager.generated.h"

class UMETA_StoryGraph;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UStoryGraphManager : public UMETA_BaseStoryGraphManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMETA_StoryGraph*> GraphVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SavedVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMETA_StoryGraph* CurrentGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentGraphVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DeprecatedVersions;
    
public:
    UStoryGraphManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_StoryGraph* GetCurrentGraph(UObject* inWCO);
    
};

