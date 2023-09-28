#ifndef MAP_GEN_H
#define MAP_GEN_H
#include "../Misc/Tilemap.h"
#include "../Components/Map_Gen_Rules.h"

class Map_Gen{
    public:
    Map_Gen(Game_Properties& game_props, Map_Gen_Properties& props, Tilemap& tilemap);
    private:
    bool gen_Empty_Field(Game_Properties& game_props, Map_Gen_Properties& map_gen_props, Tilemap& tilemap);
};

#endif