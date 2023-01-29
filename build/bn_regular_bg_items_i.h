#ifndef BN_REGULAR_BG_ITEMS_I_H
#define BN_REGULAR_BG_ITEMS_I_H

#include "bn_regular_bg_item.h"

//{{BLOCK(i_bn_gfx)

//======================================================================
//
//	i_bn_gfx, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 886 tiles (t|f reduced) lz77 compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 37348 + 2048 = 39908
//
//	Time-stamp: 2023-01-29, 00:12:38
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_I_BN_GFX_H
#define GRIT_I_BN_GFX_H

#define i_bn_gfxTilesLen 37348
extern const bn::tile i_bn_gfxTiles[1772];

#define i_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell i_bn_gfxMap[1024];

#define i_bn_gfxPalLen 512
extern const bn::color i_bn_gfxPal[256];

#endif // GRIT_I_BN_GFX_H

//}}BLOCK(i_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item i(
            regular_bg_tiles_item(span<const tile>(i_bn_gfxTiles, 1772), bpp_mode::BPP_8, compression_type::LZ77), 
            bg_palette_item(span<const color>(i_bn_gfxPal, 256), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(i_bn_gfxMap[0], size(32, 32), compression_type::NONE));
}

#endif

