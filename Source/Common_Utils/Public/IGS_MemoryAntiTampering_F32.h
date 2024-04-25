#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_EncryptedF32.h"
#include "IGS_MemoryAntiTampering_F32.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_MemoryAntiTampering_F32 : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_MemoryAntiTampering_F32();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Sub4(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Sub3(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Sub2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Sub1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mul4(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mul3(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mul2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mul1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mod4(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mod3(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mod2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Mod1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Increment(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, UPARAM(Ref) float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Encrypt2(const float& Float);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EncryptedF32 Encrypt1(const float& Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Div4(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Div3(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Div2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Div1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Decrypt2(const FIGS_EncryptedF32& Encrypted);
    
    UFUNCTION(BlueprintCallable)
    static float Decrypt1(const FIGS_EncryptedF32& Encrypted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Decrement(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Assign2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Assign1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, const float Float, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Add4(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Add3(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Result, float Float);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Add2(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatA, UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloatB, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedF32 Add1(UPARAM(Ref) FIGS_EncryptedF32& EncryptedFloat, float& Output, float Float);
    
};

