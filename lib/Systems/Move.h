#ifndef MOVE_H
#define MOVE_H

#include "../Components/Location.h"
#include "../../Misc/Tilemap.h"
#include "../Components/Passable.h"
#include "Bump_Into.h"
#include <unordered_map>

enum class Direction{
    up,
    down,
    left,
    right
};

bool move(int id, Direction dir, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_it_be_passed_thru, Tilemap* tilemap);
//function arguments are getting long, need to encapsulate 

#endif