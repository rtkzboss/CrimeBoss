#pragma once
#include "CoreMinimal.h"
#include "EMutableCompileMeshType.generated.h"

UENUM(BlueprintType)
enum class EMutableCompileMeshType : uint8 {
    Full,
    Local,
    LocalAndChildren,
    AddWorkingSetNoChildren,
    AddWorkingSetAndChildren,
};

