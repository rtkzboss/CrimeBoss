#include "PFPathFollowerComponent.h"

UPFPathFollowerComponent::UPFPathFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTeleportPhysics = false;
    this->TickInterval = 0.00f;
    this->bHidePathInfoText = false;
    this->SpeedDuration = 50.00f;
    this->TimeBased = false;
    this->bFollowRotation = true;
    this->bUseSpeedCurve = false;
    this->bOverridePathSpeedPoints = false;
    this->SpeedFactorOperation = EPFFactorOperation::None;
    this->SpeedFactor = 1.00f;
    this->_SpeedCurveCoef = 1.00f;
    this->EasingType = EEasingType::Linear;
    this->CurveDegree = 2.00f;
    this->bLoop = false;
    this->LoopType = EPFLoopType::Replay;
    this->bStartAtPlay = true;
    this->StartDelay = 0.00f;
    this->StartDistance = 0.00f;
    this->bReverse = false;
    this->bInvertRotationOnReverse = false;
    this->LookAhead = 0.00f;
    this->bComputeRollOnDrive = false;
    this->bUseRotationCurve = false;
    this->bUsePathPitchAndYaw = false;
    this->bAutoRecompute = false;
    this->bKeepRelativeDistances = false;
    this->RotationPointSteps = 10;
    this->GenerateOnSplineControlPoints = false;
    this->RollSampleDistance = -1.00f;
    this->bClampGeneratedAngles = false;
    this->RollAnglesClampMax = 90.00f;
    this->RollAnglesClampMin = -90.00f;
    this->RollIntepType = EPFRollInterpType::CubicClamped;
    this->RotationFactorOperation = EPFFactorOperation::None;
    this->RotationMaskLocal = true;
    this->bOverrideRotationCurve = false;
    this->LookAtComponent = NULL;
    this->bLookAtEvenIfNotStarted = false;
    this->bStarted = false;
    this->bPause = false;
    this->bAlignToPathStart = true;
    this->CurrentDistanceOnPath = 0.00f;
    this->bOverridePathEventPoints = false;
    this->_pathDuration = 0.00f;
    this->_currSplineLength = 0.00f;
    this->_ElapsedTime = 0.00f;
    this->_lastTickTime = 0.00f;
    this->_LastPassedEventIndex = -1;
    this->MaxFollowerSpeed = 0.00f;
    this->MaxFollowerSpeedSet = false;
}

void UPFPathFollowerComponent::UpdateAutoRotationPoints() {
}

void UPFPathFollowerComponent::Stop() {
}

void UPFPathFollowerComponent::StartImpl() {
}

void UPFPathFollowerComponent::Start(float NewStartDelay) {
}

void UPFPathFollowerComponent::SetPathToFollow(USplineComponent* Spline) {
}

void UPFPathFollowerComponent::SetPathOwner(AActor* NewPathOwner) {
}

void UPFPathFollowerComponent::SetMaxFollowerSpeed(float MaxSpeed) {
}

void UPFPathFollowerComponent::SetCurrentDistance(float NewDistance) {
}

void UPFPathFollowerComponent::Reverse(bool NewReverse) {
}

void UPFPathFollowerComponent::Pause() {
}

FRotator UPFPathFollowerComponent::ModifyFinalRotation_Implementation(const FRotator& NewRotation) {
    return FRotator{};
}

FVector UPFPathFollowerComponent::ModifyFinalLocation_Implementation(const FVector& NewLocation) {
    return FVector{};
}

bool UPFPathFollowerComponent::HasPath() const {
    return false;
}

float UPFPathFollowerComponent::GetSpeedAtSpeedPoint(int32 PointIndex) const {
    return 0.0f;
}

float UPFPathFollowerComponent::GetSpeedAtDistance(float Distance) const {
    return 0.0f;
}

FRotator UPFPathFollowerComponent::GetRotationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const {
    return FRotator{};
}

UPFPathComponent* UPFPathFollowerComponent::GetPathToFollow() {
    return NULL;
}

AActor* UPFPathFollowerComponent::GetPathOwner() const {
    return NULL;
}

FVector UPFPathFollowerComponent::GetMoveDirection() const {
    return FVector{};
}

FVector UPFPathFollowerComponent::GetLocationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const {
    return FVector{};
}

FPFEventPoints UPFPathFollowerComponent::GetEventPoints() {
    return FPFEventPoints{};
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByName(const FName& Name) {
    return NULL;
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByIndex(int32 Index) {
    return NULL;
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateAll() {
    return NULL;
}

FEventPoint UPFPathFollowerComponent::GetEventPointByName(const FName& Name) {
    return FEventPoint{};
}

void UPFPathFollowerComponent::FollowPath(float FollowStep) {
}

bool UPFPathFollowerComponent::EventPointExistByName(const FName& Name) {
    return false;
}

FRotator UPFPathFollowerComponent::ComputeLookAtRotation_Implementation(USceneComponent* TargetComponent, const FVector& FollowerLocation) {
    return FRotator{};
}

void UPFPathFollowerComponent::ComputeAutoRotationPoints() {
}

void UPFPathFollowerComponent::ClearMaxFollowerSpeed() {
}


