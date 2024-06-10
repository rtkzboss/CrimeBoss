#include "IGS_SlideTransition_AnimGraphNode.h"
#include "Animation/InputScaleBias.h"

FIGS_SlideTransition_AnimGraphNode::FIGS_SlideTransition_AnimGraphNode() {
    (*this).RootBone.BoneName = NAME_None;
    (*this).SlidingDirection.X = 0.000000000e+00f;
    (*this).SlidingDirection.Y = 0.000000000e+00f;
    (*this).SlidingDirection.Z = 0.000000000e+00f;
    (*this).Angle = 0.000000000e+00f;
}

