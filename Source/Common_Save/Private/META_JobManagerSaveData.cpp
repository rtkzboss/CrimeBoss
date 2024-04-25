#include "META_JobManagerSaveData.h"

FMETA_JobManagerSaveData::FMETA_JobManagerSaveData() {
    this->CurrentJob = NULL;
    this->JobsCompletedAmount = 0;
    this->bWasPlayerTransferredToFPSSide = false;
    this->bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
}

