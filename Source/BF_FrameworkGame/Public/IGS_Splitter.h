#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_BreachInterface.h"
#include "IGS_Splitter.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Splitter : public AActor, public IIGS_BreachInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* SplitterShape;
    
public:
    AIGS_Splitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SplitterInit();
    

    // Fix for true pure virtual functions not being implemented
};

