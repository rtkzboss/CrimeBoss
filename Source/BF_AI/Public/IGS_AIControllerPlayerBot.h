#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterIDInterface.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerPlayerBot.generated.h"

class UIGS_PlayerBotControllerComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerPlayerBot : public AIGS_AIControllerGame, public IIGS_HeisterDataInterface, public IIGS_HeisterNumberInterface, public IIGS_CharacterIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerBotControllerComponent* m_PlayerBotComponent;
    
public:
    AIGS_AIControllerPlayerBot(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMaxLeveled(bool inIsMaxLeveled) override PURE_VIRTUAL(SetIsMaxLeveled,);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericVariant(int32 inGenericVariant) override PURE_VIRTUAL(SetGenericVariant,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSkinID(FGameplayTag inTagID) override PURE_VIRTUAL(SetCharacterSkinID,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EIGS_CharacterID inCharacterID) override PURE_VIRTUAL(SetCharacterID,);
    
    UFUNCTION(BlueprintCallable)
    bool IsMaxLeveled() const override PURE_VIRTUAL(IsMaxLeveled, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGenericVariant() const override PURE_VIRTUAL(GetGenericVariant, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetCharacterSkinID() const override PURE_VIRTUAL(GetCharacterSkinID, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    EIGS_CharacterID GetCharacterID() const override PURE_VIRTUAL(GetCharacterID, return EIGS_CharacterID::Char_Unknown;);
    
};

