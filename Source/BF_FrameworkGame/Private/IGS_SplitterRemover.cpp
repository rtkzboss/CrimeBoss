#include "IGS_SplitterRemover.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SplitterRemover::AIGS_SplitterRemover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RemoveSplittersWithTag = TEXT("TAG_SplitterRemoverTarget");
}


