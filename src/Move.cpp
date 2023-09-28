#include "Systems/Move.h"


bool move(int id, Direction dir, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_it_be_passed_thru, Tilemap* tilemap){
    int temp_y = locations->at(id)->y;
    int temp_x = locations->at(id)->x;
    Tile* current_tile = tilemap->tiles_in_map[locations->at(id)->y * tilemap->width + locations->at(id)->x];
    switch(dir){
        case Direction::up:
            temp_y--;
        break;
        case Direction::down:
            temp_y++;
        break;
        case Direction::left:
            temp_x--;
        break;
        case Direction::right:
            temp_x++;
        break;
    }

    //check to make sure entity doesn't go out of bounds

    if(     temp_y < 0                      ||
            temp_y >= tilemap->height       ||
            temp_x < 0                      ||
            temp_x >= tilemap->width)
    {
        return false;
    }

    //make sure new location is passable, needs cleaning up

    bool bumped = false;
    for(int i = 0; i < current_tile->entities_in_tile.size(); i++)
    {
        if(!can_it_be_passed_thru->at(current_tile->entities_in_tile[i])->passable)
        {
            bump_Into(id, current_tile->entities_in_tile[i]);
            bumped = true;
        }
    }
    if(bumped)
    {
        return false;
    }
    else
    {
        locations->at(id)->y = temp_y;
        locations->at(id)->x = temp_x;
        return true;
    }
}