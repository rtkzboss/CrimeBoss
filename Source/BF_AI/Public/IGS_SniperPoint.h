#pragma once
#include "CoreMinimal.h"
#include "IGS_SnipePointData.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_SniperPoint.generated.h"

class AIGS_AIControllerSniper;
class AIGS_GameCharacterFramework;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SniperPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnipeAngleVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnipeAngleHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnipeAngleVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSnipingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SnipePointData> SnipingBehavior;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> m_Sniper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_AIControllerSniper> m_SniperController;
    
public:
    AIGS_SniperPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisitorManually(AIGS_GameCharacterFramework* inGameCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetVisitor() const;
    
};

