#ifndef TILE_H
#define TILE_H
#include <vector>
#include "../Components/Game_Properties.h"

struct Tile{
    Tile(Game_Properties& props, int y, int x, std::vector<int&>& entities_in_tile);
    Tile(Game_Properties& props, int y, int x, int& entity_in_tile);
    int tile_id;
    int y, x;
    std::vector<int> entities_in_tile;
};

#endif