#include "IGS_SaveData_Version.h"

FIGS_SaveData_Version::FIGS_SaveData_Version() {
    (*this).JsonVersion = 0;
    (*this).RevisionCreated = TEXT("");
    (*this).RevisionSaved = TEXT("");
    (*this).SnapshotRevision = TEXT("");
}

