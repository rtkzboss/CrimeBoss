#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_CharacterNotification.generated.h"

class UMETA_Character;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_CharacterNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Character* m_Character;
    
public:
    UMETA_CharacterNotification();

    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* inCharacter, FText inOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Character* GetCharacter() const;
    
};

