#ifndef BN_REGULAR_BG_TILES_ITEMS_I_H
#define BN_REGULAR_BG_TILES_ITEMS_I_H

#include "bn_regular_bg_tiles_item.h"

//{{BLOCK(i_bn_gfx)

//======================================================================
//
//	i_bn_gfx, 256x256@8, 
//	+ 1024 tiles not compressed
//	Total size: 65536 = 65536
//
//	Time-stamp: 2023-01-28, 20:51:53
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_I_BN_GFX_H
#define GRIT_I_BN_GFX_H

#define i_bn_gfxTilesLen 65536
extern const bn::tile i_bn_gfxTiles[2048];

#endif // GRIT_I_BN_GFX_H

//}}BLOCK(i_bn_gfx)

namespace bn::regular_bg_tiles_items
{
    constexpr inline regular_bg_tiles_item i(
            span<const tile>(i_bn_gfxTiles, 2048), bpp_mode::BPP_8, compression_type::NONE);
}

#endif

