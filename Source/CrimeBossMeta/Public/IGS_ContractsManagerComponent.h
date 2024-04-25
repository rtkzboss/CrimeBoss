#pragma once
#include "CoreMinimal.h"
#include "IGS_Contract.h"
#include "IGS_ContractManagerBaseComponent.h"
#include "IGS_OnActiveContractRemovedDelegate.h"
#include "IGS_OnAvailableContractAddedDelegate.h"
#include "IGS_OnContractActivatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_ContractsManagerComponent.generated.h"

class UIGS_ContractID;
class UMETA_BaseFPSMission;
class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ContractsManagerComponent : public UIGS_ContractManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_ContractID>, UMETA_BaseFPSMission*> ActiveContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ContractID>> AvailableContracts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnContractActivated OnActiveContractAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnActiveContractRemoved OnActiveContractRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAvailableContractAdded OnAvailableContractAdded;
    
    UIGS_ContractsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WipeSave();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveContractMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseContract(TSubclassOf<UIGS_ContractID> inID);
    
    UFUNCTION(BlueprintCallable)
    bool IsContractActivated(TSubclassOf<UIGS_ContractID> inID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UMETA_MissionID> GetRandomMissionIDFromContract(TSubclassOf<UIGS_ContractID> inContractID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FIGS_Contract GetContractByID(TSubclassOf<UIGS_ContractID> inContractID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsumeActiveContract();
    
    UFUNCTION(BlueprintCallable)
    void AddAvailableContract(TSubclassOf<UIGS_ContractID> inID);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveContract(TSubclassOf<UIGS_ContractID> inID);
    
};

