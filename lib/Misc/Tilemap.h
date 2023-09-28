#ifndef TILEMAP_H
#define TILEMAP_H
#include <vector>
#include "../Misc/Tile.h"

struct Tilemap{
    std::vector<Tile*> tiles_in_map;
    int width, height;
};

#endif