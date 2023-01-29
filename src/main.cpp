#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include <bn_regular_bg_tiles_ptr.h>
#include <bn_regular_bg_tiles_item.h>

//#include "bn_affine_bg_items_i.h"
#include "bn_regular_bg_items_i.h"
#include "bn_music_items.h"
#include "bn_music_actions.h"

#include <bn_affine_bg_item.h>
#include "bn_dmg_music_items_ee.h"



int main()
{
    bn::core::init();
    
    bn::music_items::c.play(0.5);
    //bn::affine_bg_ptr affine_bg = bn::affine_bg_items::i.create_bg(0, 0);
    bn::regular_bg_ptr regular_bg = bn::regular_bg_items::i.create_bg(0, 0);

    while(true)
    {
        
        bn::core::update();
    }
}
