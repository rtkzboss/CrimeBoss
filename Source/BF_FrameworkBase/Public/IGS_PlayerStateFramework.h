#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_RespectLvl.h"
#include "IGS_CharacterIDInterface.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_PlayerStateFramework.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_PlayerStateFramework : public APlayerState, public IIGS_CharacterIDInterface, public IIGS_HeisterNumberInterface {
    GENERATED_BODY()
public:
    AIGS_PlayerStateFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRespect(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressionLevel(int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetRespect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgressionLevel() const;
    

    // Fix for true pure virtual functions not being implemented
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
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

