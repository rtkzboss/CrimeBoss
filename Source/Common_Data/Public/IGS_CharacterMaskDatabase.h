#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_CharacterMaskTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterMaskDatabase.generated.h"

class UIGS_CharacterMaskBase;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_CharacterMaskDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CharacterMaskDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(TSubclassOf<UIGS_CharacterMaskBase> inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterMaskTableRow GetDataCharacterMask(UObject* inWCO, TSubclassOf<UIGS_CharacterMaskBase> inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CharacterMaskTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
};

