#ifndef TILEMAP_H
#define TILEMAP_H
#include <vector>
#include "Dimensions.h"

struct Tilemap{
    int id;
    std::vector<int*> tile;
    Dimensions dimensions;
};

#endif