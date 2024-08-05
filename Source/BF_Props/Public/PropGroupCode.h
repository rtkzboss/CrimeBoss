#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PropGroupCode.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class BF_PROPS_API APropGroupCode : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> PropCanSpawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> PropToSpawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> PropBlockedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UActorComponent*> ComponentMap;
    
public:
    APropGroupCode(const FObjectInitializer& ObjectInitializer);

};

