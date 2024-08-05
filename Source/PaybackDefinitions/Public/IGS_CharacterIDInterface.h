#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterIDInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class PAYBACKDEFINITIONS_API UIGS_CharacterIDInterface : public UInterface {
    GENERATED_BODY()
};

class PAYBACKDEFINITIONS_API IIGS_CharacterIDInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetIsMaxLeveled(bool inIsMaxLeveled) PURE_VIRTUAL(SetIsMaxLeveled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetGenericVariant(int32 inGenericVariant) PURE_VIRTUAL(SetGenericVariant,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetCharacterSkinID(FGameplayTag inTagID) PURE_VIRTUAL(SetCharacterSkinID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetCharacterID(EIGS_CharacterID inCharacterID) PURE_VIRTUAL(SetCharacterID,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsMaxLeveled() const PURE_VIRTUAL(IsMaxLeveled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetGenericVariant() const PURE_VIRTUAL(GetGenericVariant, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetCharacterSkinID() const PURE_VIRTUAL(GetCharacterSkinID, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    virtual EIGS_CharacterID GetCharacterID() const PURE_VIRTUAL(GetCharacterID, return EIGS_CharacterID::Char_Unknown;);
    
};

