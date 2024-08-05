#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_RoomSecurityInfoWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_RoomSecurityInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
    UIGS_RoomSecurityInfoWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSecurityChanged(EIGS_RoomSecurityType inType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSecurityTierChanged(EIGS_RoomSecurityType inType);
    
};

