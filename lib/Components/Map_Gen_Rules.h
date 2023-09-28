#ifndef MAP_GEN_RULES_H
#define MAP_GEN_RULES_H

enum Map_Gen_Toggle
{
    EMPTY_FIELD = 0b01, //should always be on or else you'll be floating in space
    RANDOM_ROOMS = 0b0010
};

enum class Map_Biome
{
    grasslands,
    dungeon,
    cave
};

struct Map_Gen_Properties
{       //useless? forgot why i made it
    int height, width;
    Map_Biome biome;
    Map_Gen_Toggle features;
};

#endif