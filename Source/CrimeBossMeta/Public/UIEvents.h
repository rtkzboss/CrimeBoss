#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UIEvents.generated.h"

class UMETA_Character;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UUIEvents : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> m_HiredHeisters;
    
public:
    UUIEvents();

    virtual TStatId GetStatId() const override { return {}; }
};

