#include "../lib/Systems/Map_Gen.h"

Map_Gen::Map_Gen(Game_Properties& game_props, Map_Gen_Properties& map_gen_props, Tilemap& tilemap)
{
    if(map_gen_props.features & EMPTY_FIELD)
    {
        gen_Empty_Field(game_props, map_gen_props, tilemap);
    }
}

bool Map_Gen::gen_Empty_Field(Game_Properties& game_props, Map_Gen_Properties& map_gen_props, Tilemap& tilemap)
{
    for(int y = 0; y < map_gen_props.height; y++)
    {
        for(int x = 0; x < map_gen_props.width; x++)
        {
            game_props.entities.push_back(game_props.new_id);
            tilemap.tiles_in_map.push_back(new Tile(game_props, y, x, game_props.entities.back()));
            game_props.material.insert(std::make_pair(game_props.new_id, new Material(game_props.new_id, Material_Type::grass)));
            game_props.can_it_be_passed_thru.insert(std::make_pair(game_props.new_id, new Passable(game_props.new_id, true)));
            game_props.new_id++;
        }
    }
}

