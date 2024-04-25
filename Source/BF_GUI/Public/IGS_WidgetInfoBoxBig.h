#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInfoBoxBig.generated.h"

class UBorder;
class UImage;
class UTextBlock;
class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetInfoBoxBig : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LeftSubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RightSubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemBigImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TypeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ItemBigImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HeaderColor;
    
    UIGS_WidgetInfoBoxBig();

    UFUNCTION(BlueprintCallable)
    void Setup(FText InName, FText inInfo, FText inType, FText inLeftSubType, FText inRightSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetType(FText inType);
    
    UFUNCTION(BlueprintCallable)
    void SetRightSubType(FText inRightSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetName(FText InName);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftSubType(FText inLeftSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(FText inInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetIconImage(TSoftObjectPtr<UTexture> inImageTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBigItemImage(TSoftObjectPtr<UTexture> inImageTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Refresh() const;
    
};

