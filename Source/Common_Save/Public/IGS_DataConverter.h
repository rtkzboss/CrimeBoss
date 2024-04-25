#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "META_MissionsSave.h"
#include "IGS_DataConverter.generated.h"

class UMETA_BaseMission;
class UObject;

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_DataConverter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_DataConverter();

    UFUNCTION(BlueprintCallable)
    static FMETA_MissionsSave ConvertQuickplayMissionsToSave(TArray<UMETA_BaseMission*> inMissions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_BaseMission*> ConvertQuickplayMissionsFromSave(const UObject* inWCO, UPARAM(Ref) FMETA_MissionsSave& inMissions);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_MissionsSave ConvertChainMissionsToSave(TArray<UMETA_BaseMission*> inMissions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_BaseMission*> ConvertChainMissionsFromSave(const UObject* inWCO, UPARAM(Ref) FMETA_MissionsSave& inMissions);
    
};

