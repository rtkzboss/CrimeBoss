#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "IGS_SaveData_Base.h"
#include "IGS_PaybackSaveGameBase.generated.h"

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_PaybackSaveGameBase : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 SaveFileVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> SaveDataCompressedBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SaveDataSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SaveDataEncryptionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFailedChecksum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Base DebugSaveDataBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShouldUnlockVeteranRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAppliedPatchSave;
    
public:
    UIGS_PaybackSaveGameBase();

};

