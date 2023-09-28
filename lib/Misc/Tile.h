#ifndef TILE_H
#define TILE_H
#include <vector>

struct Tile{
    int tile_id;
    int y, x;
    std::vector<int> entities_in_tile;
};

#endif