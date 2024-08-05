#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CursorComponent.generated.h"

class UIGS_CursorWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_INPUT_API UIGS_CursorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CursorWidget* VirtualSoftwareCursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CursorWidget* NativeSoftwareCursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingVirtualCursor;
    
    UIGS_CursorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseVirtualCursor();
    
    UFUNCTION(BlueprintCallable)
    void UseNativeCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovering() const;
    
};

