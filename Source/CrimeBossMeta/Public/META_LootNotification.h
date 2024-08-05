#pragma once
#include "CoreMinimal.h"
#include "EMETA_LootPurpose.h"
#include "META_BaseNotification.h"
#include "META_LootNotification.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_LootNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LootCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_LootPurpose LootPurpose;
    
public:
    UMETA_LootNotification();

    UFUNCTION(BlueprintCallable)
    void SetLootInfo(const FText& inLootCategory, const EMETA_LootPurpose inLootPurpose, const int32 inLootValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLootValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_LootPurpose GetLootPurpose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLootCategory() const;
    
};

