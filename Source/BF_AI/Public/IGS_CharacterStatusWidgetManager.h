#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "IGS_CharacterStatusWidgetManager.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_CharacterData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_CharacterStatusWidgetManager : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterData* CharacterData;
    
public:
    UIGS_CharacterStatusWidgetManager(const FObjectInitializer& ObjectInitializer);

};

