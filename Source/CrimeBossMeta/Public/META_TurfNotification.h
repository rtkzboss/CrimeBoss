#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_BaseNotification.h"
#include "META_TurfNotification.generated.h"

class UMapTile;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TurfNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapTile* m_Tile;
    
public:
    UMETA_TurfNotification();

    UFUNCTION(BlueprintCallable)
    void SetData(UMapTile* inTile, const EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapTile* GetTile() const;
    
};

