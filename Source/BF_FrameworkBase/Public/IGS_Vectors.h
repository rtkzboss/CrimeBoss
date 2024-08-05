#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVectorSideEnum.h"
#include "IGS_Vectors.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_Vectors : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_Vectors();

    UFUNCTION(BlueprintCallable)
    static EVectorSideEnum GetVector2SideFromVector1Step90(const FVector& Vector1, const FVector& Vector2);
    
    UFUNCTION(BlueprintCallable)
    static EVectorSideEnum GetVector2SideFromVector1Step45(const FVector& Vector1, const FVector& Vector2, float& OutDelta);
    
    UFUNCTION(BlueprintCallable)
    static EVectorSideEnum GetVector2SideFromVector1Step180(const FVector& Vector1, const FVector& Vector2);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTargetPositionBasedOnVelocity(AActor* TargetActor, const FVector& PursuerPosition, const FVector2D& MultiplierFR, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleBetweenVectorsRad(const FVector& Vector1, const FVector& Vector2);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleBetweenVectorsDeg(const FVector& Vector1, const FVector& Vector2);
    
};

