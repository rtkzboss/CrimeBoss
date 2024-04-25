#include "META_StoryGoal.h"
#include "EMETA_GoalType.h"

UMETA_StoryGoal::UMETA_StoryGoal() {
    this->Type = EMETA_GoalType::Story;
}

TSoftObjectPtr<UStoryGraphManager> UMETA_StoryGoal::GetGraph() {
    return NULL;
}


