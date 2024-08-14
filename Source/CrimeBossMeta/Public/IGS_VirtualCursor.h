#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "IGS_VirtualCursor.generated.h"

class IVirtualCursorTarget;
class UVirtualCursorTarget;
class UIGS_GameScreenHandler;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API AIGS_VirtualCursor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SupportedScreenGameplayTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_ColliderComponent;
    
public:
    AIGS_VirtualCursor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSupportedScreenOpen(UIGS_GameScreenHandler* inGameScreenHandler) const;
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IVirtualCursorTarget> GetClosestTargetInDirection(FVector InDirection, const TArray<AActor*>& inActors);
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IVirtualCursorTarget> GetClosestOverlappedTarget();
    
};

