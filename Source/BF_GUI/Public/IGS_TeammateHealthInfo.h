#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_TeammateHealthInfo.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UIGS_TeammateHealthInfoSingleWidget;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_TeammateHealthInfo : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TeammateHealthInfoSingleWidget* SecondPlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TeammateHealthInfoSingleWidget* ThirdPlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TeammateHealthInfoSingleWidget* FourthPlayerWidget;
    
public:
    UIGS_TeammateHealthInfo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReposses(AIGS_GameCharacterFramework* inCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToPlayerJoinManager();
    
};

