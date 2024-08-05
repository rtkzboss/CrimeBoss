#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_InfoMessageType.h"
#include "IGS_InfoMessagesManager.generated.h"

class UIGS_InfoMessagesManager;
class UIGS_InventoryObjectFramework;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_InfoMessagesManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_InfoMessagesManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_InfoMessagesManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddItemAddedMessage(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable)
    void AddInfoMessage(const FText& InText, EIGS_InfoMessageType inMessageType, int32 inHeisterID);
    
};

