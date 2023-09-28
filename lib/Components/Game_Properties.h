#ifndef GAME_PROPERTIES_H
#define GAME_PROPERTIES_H
#include <vector>
#include <unordered_map>
#include "Material.h"
#include "Passable.h"

struct Game_Properties
{
    //ALL components and entities will be stored here rather than the main loop
    Game_Properties();
    std::vector<int> entities;
    std::unordered_map<int, Passable*> can_it_be_passed_thru;
    std::unordered_map<int, Material*> material;
    int new_id;
};

#endif