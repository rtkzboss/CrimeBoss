#include "META_ItemSaveDataBase.h"

FMETA_ItemSaveDataBase::FMETA_ItemSaveDataBase() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*this).Price = 0;
    (*this).IsUnseenInShop = false;
}

