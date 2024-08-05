#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "IGS_PlayerInfoWidget.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerInfoWidget : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DebugEditorName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* CharacterOwner;
    
public:
    UIGS_PlayerInfoWidget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewName(const FText& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewHeisterNumber(int32 inNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHeisterNumber();
    
};

