#ifndef BN_AFFINE_BG_ITEMS_I_H
#define BN_AFFINE_BG_ITEMS_I_H

#include "bn_affine_bg_item.h"

//{{BLOCK(i_bn_gfx)

//======================================================================
//
//	i_bn_gfx, 256x256@8, 
//	+ palette 16 entries, not compressed
//	+ 34 tiles (t reduced) not compressed
//	+ affine map, not compressed, 32x32 
//	Total size: 32 + 2176 + 1024 = 3232
//
//	Time-stamp: 2023-01-28, 21:40:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_I_BN_GFX_H
#define GRIT_I_BN_GFX_H

#define i_bn_gfxTilesLen 2176
extern const bn::tile i_bn_gfxTiles[68];

#define i_bn_gfxMapLen 1024
extern const bn::affine_bg_map_cell i_bn_gfxMap[1024];

#define i_bn_gfxPalLen 32
extern const bn::color i_bn_gfxPal[16];

#endif // GRIT_I_BN_GFX_H

//}}BLOCK(i_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item i(
            affine_bg_tiles_item(span<const tile>(i_bn_gfxTiles, 68), compression_type::NONE), 
            bg_palette_item(span<const color>(i_bn_gfxPal, 16), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(i_bn_gfxMap[0], size(32, 32), compression_type::NONE));
}

#endif

