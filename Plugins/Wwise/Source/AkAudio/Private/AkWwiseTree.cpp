#include "AkWwiseTree.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UAkWwiseTree::UAkWwiseTree() {
}

void UAkWwiseTree::SetSearchText(const FString& newText) {
}

FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem() const {
    return FAkWwiseObjectDetails{};
}

FString UAkWwiseTree::GetSearchText() const {
    return TEXT("");
}


