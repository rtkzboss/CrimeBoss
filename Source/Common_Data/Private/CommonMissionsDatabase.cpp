#include "CommonMissionsDatabase.h"
#include "Templates/SubclassOf.h"

UCommonMissionsDatabase::UCommonMissionsDatabase() {
}

FCommonMissionDataBase UCommonMissionsDatabase::GetBaseMissionDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BaseMissionObject>& inClass, bool& outSucceeded) {
    return FCommonMissionDataBase{};
}


