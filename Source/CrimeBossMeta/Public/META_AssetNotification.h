#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_AssetNotification.generated.h"

class UMETA_PlotlineAsset;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_AssetNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_PlotlineAsset* m_Asset;
    
public:
    UMETA_AssetNotification();

    UFUNCTION(BlueprintCallable)
    void SetAsset(UMETA_PlotlineAsset* InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_PlotlineAsset* GetAsset() const;
    
};

