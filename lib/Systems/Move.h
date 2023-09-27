#ifndef MOVE_H
#define MOVE_H

#include "../Components/Location.h"
#include "../Components/Tilemap.h"
#include "../Components/Passable.h"
#include "Bump_Into.h"
#include <unordered_map>

enum class Direction{
    up,
    down,
    left,
    right
};
//moves entity one space in one direction
bool move(int id, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_be_passed_thru, Tilemap* tilemap, Direction dir);
//moves entity in straight line for a certain distance
bool move(int id, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_be_passed_thru, Tilemap* tilemap, Direction dir, int distance);
//moves entity to a certain location. teleport flag indicates if it moves or just changes location
bool move(int id, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_be_passed_thru, Tilemap* tilemap, int y, int x, bool teleport);

#endif