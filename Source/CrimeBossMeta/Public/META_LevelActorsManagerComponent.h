#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_LevelActorsManagerBaseComponent.h"
#include "META_LevelActorsManagerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_LevelActorsManagerComponent : public UIGS_LevelActorsManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_LevelActorsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UnRegister(FGameplayTag inTag, UObject* inObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SwitchToCamera(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Register(FGameplayTag inTag, UObject* inObject);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetRandom(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetFirst(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAllWithChildren(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAll(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

