#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_EncryptedI32.h"
#include "IGS_MemoryAntiTampering_I32.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_MemoryAntiTampering_I32 : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_MemoryAntiTampering_I32();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Sub4(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Sub3(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Sub2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Sub1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mul4(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mul3(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mul2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mul1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mod4(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mod3(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mod2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Mod1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Increment(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, UPARAM(Ref) int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Encrypt2(const int32& Int);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EncryptedI32 Encrypt1(const int32& Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Div4(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Div3(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Div2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Div1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Decrypt2(const FIGS_EncryptedI32& Encrypted);
    
    UFUNCTION(BlueprintCallable)
    static int32 Decrypt1(const FIGS_EncryptedI32& Encrypted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Decrement(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Assign2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Assign1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, const int32 Int, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Add4(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Add3(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Result, int32 Int);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Add2(UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntA, UPARAM(Ref) FIGS_EncryptedI32& EncryptedIntB, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_EncryptedI32 Add1(UPARAM(Ref) FIGS_EncryptedI32& EncryptedInt, int32& Output, int32 Int);
    
};

