#pragma once
#include "CoreMinimal.h"
#include "IGS_AITransitionObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "NavLinkLeftSignatureDelegate.h"
#include "NavLinkReachedSignatureDelegate.h"
#include "IGS_NavLinkBase.generated.h"

class AIGS_GameCharacterFramework;
class UBoxComponent;
class UIGS_NavLinkComponentFramework;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_NavLinkBase : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavLinkReachedSignature OnNavlinkReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavLinkReachedSignature OnTransitionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavLinkLeftSignature OnNavlinkLeft;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* helpersBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Right;
    
public:
    AIGS_NavLinkBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNavlinkTransitionStarted(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight);
    
    UFUNCTION(BlueprintCallable)
    void OnNavlinkComponentReached(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight);
    
    UFUNCTION(BlueprintCallable)
    void OnNavlinkComponentLeft(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn);
    
};

