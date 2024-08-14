#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "UGCPackage.h"
#include "UGCRegistry.generated.h"

class AActor;

UCLASS(Blueprintable)
class CRIMEBOSSUGC_API UUGCRegistry : public UObject {
    GENERATED_BODY()
private:
    class FAssetRegistryModule* CachedAssetRegistryModule;
    class IAssetRegistry& GetAssetRegistry();
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUGCPackage> UGCPackages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, TSubclassOf<AActor>> RegisteredOverrides;
    
    UUGCRegistry();

    UFUNCTION(BlueprintCallable)
    void RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetOverrideForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapsInPackage(FUGCPackage Package, TArray<FName>& Maps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllClassesInPackage(FUGCPackage Package, TArray<UClass*>& Classes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorClassesWithReplacementActorComponentsInPackage(FUGCPackage Package, TArray<TSubclassOf<AActor>>& ActorClasses);
    
    UFUNCTION(BlueprintCallable)
    bool FindUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideForClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyAllOverridesInPackage(FUGCPackage Package);
    
};

