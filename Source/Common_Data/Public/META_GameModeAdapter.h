#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIGS_CharacterID.h"
#include "EMETA_RespectLvl.h"
#include "META_MissionDatabase.h"
#include "META_GameModeAdapter.generated.h"

class UIGS_EconomyData_Base;
class UIGS_MenuCommonData_Base;
class UMETA_Character;
class UMETA_QuickPlayData;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_GameModeAdapter : public UInterface {
    GENERATED_BODY()
};

class IMETA_GameModeAdapter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMetaGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetUsedCharactersSurnames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetUsedCharactersFirstNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_Character*> GetUniqueHeistersFromCrew();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMETA_QuickPlayData* GetQuickplayData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EMETA_RespectLvl GetPlayerRespect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UIGS_EconomyData_Base* GetEconomyData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UIGS_MenuCommonData_Base* GetCommonData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoesHeisterPresenceInCrew(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanMissionHaveObjectives(const FMETA_MissionDatabase& inMissionData);
    
};

