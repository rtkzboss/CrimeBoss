#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMETA_NotificationEffect.h"
#include "EMETA_NotificationType.h"
#include "META_BaseNotification.generated.h"

class UMETA_NotificationID;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API UMETA_BaseNotification : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_NotificationID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_NotificationEffect Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_NotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_NotificationID> AggregationNotificationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideInIntro;
    
public:
    UMETA_BaseNotification();

    UFUNCTION(BlueprintCallable)
    void SetInfo(TSoftObjectPtr<UMETA_NotificationID> inID, EMETA_NotificationType inType, FText InTitle, FText inDescription, EMETA_NotificationEffect inEffect, TSoftObjectPtr<UTexture2D> inImage, TSoftObjectPtr<UMETA_NotificationID> inAggregationID, bool inHideInIntro);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(TSoftObjectPtr<UTexture2D> inImage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_NotificationType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_NotificationID> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideInIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_NotificationEffect GetEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMETA_NotificationID> GetAggregateID() const;
    
};

