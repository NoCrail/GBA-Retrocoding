#ifndef BN_DMG_MUSIC_ITEMS_EE_H
#define BN_DMG_MUSIC_ITEMS_EE_H

#include "bn_dmg_music_item.h"

extern const uint8_t ee_bn_dmg[];

namespace bn::dmg_music_items
{
    constexpr inline dmg_music_item ee(*ee_bn_dmg);
}

#endif

