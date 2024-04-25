#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "IGS_AIGameCharacter.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_AICharacterPlayerBot.generated.h"

class UIGS_ListInventory;
class UIGS_LootBagInteractiveComponent;
class UIGS_NetworkComponentCharacter;
class UIGS_PlayerLoadoutComponent;
class UIGS_PlayerMetaTransferComponent;
class UIGS_SuppressionHandlerComponent;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class BF_AI_API ADEPRECATED_IGS_AICharacterPlayerBot : public AIGS_AIGameCharacter, public IIGS_HeisterNumberInterface, public IIGS_HeisterDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerLoadoutComponent* PlayerLoadoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ListInventory* BotInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerMetaTransferComponent* PlayerMetaTransferComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SuppressionHandlerComponent* BotSuppressionHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagInteractiveComponent* LootBagInteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    
public:
    ADEPRECATED_IGS_AICharacterPlayerBot(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

