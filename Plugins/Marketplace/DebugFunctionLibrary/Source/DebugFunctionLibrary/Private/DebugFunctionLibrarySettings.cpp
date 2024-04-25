#include "DebugFunctionLibrarySettings.h"

UDebugFunctionLibrarySettings::UDebugFunctionLibrarySettings() {
    this->bGlobalDebug = true;
    this->bGlobalPrintDebug = true;
    this->bGlobalLogDebug = true;
    this->bGlobalDrawDebug = true;
    this->MaxPrintNodeFunctionDiscoveryIterations = 1000;
    this->DrawDebugTickDuration = 0.05f;
    this->PrintDebugTickDuration = 0.05f;
    this->StaticPrintLogPrefix = EPrintLogPrefix::ClassFunction;
    this->QuickPrintLogPrefix = EPrintLogPrefix::ClassFunction;
    this->bDebug = true;
    this->bPrintDebug = true;
    this->PrintDuration = 10.00f;
    this->bPrintClass = true;
    this->bPrintFunction = true;
    this->bLogDebug = true;
    this->bLogClass = true;
    this->bLogFunction = true;
    this->bDrawDebug = true;
    this->DrawDuration = 30.00f;
    this->LineThickness = 2.00f;
    this->LineLength = 150.00f;
    this->Radius = 30.00f;
    this->Segments = 12;
    this->ArrowSize = 20.00f;
    this->HalfHeight = 80.00f;
    this->Size = 50.00f;
    this->Scale = 3.00f;
}


