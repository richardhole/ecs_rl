#include "../lib/Systems/Move.h"

bool move(int id, std::unordered_map<int, Location*>* locations, std::unordered_map<int, Passable*>* can_be_passed_thru, Tilemap* tilemap, Direction dir){
    int temp_y = locations->at(id)->y;
    int temp_x = locations->at(id)->x;
    int tile_id;
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
    if( temp_y < 0                              ||  //making sure entity stays within bounds
        temp_y >= tilemap->dimensions.height     ||
        temp_x < 0                              ||
        temp_x >= tilemap->dimensions.width)
    {
        return false;
    }
    else
    {   
        std::vector<int> entities_in_new_loc;                
                                //making sure entity doesn.'t enter unpassable location
        for(auto it = locations->begin(); it != locations->end(); it++)
        {
            //will work on operator overloading to make this less messy
            if(it->second->y == temp_y && it->second->x == temp_x)
            {
                entities_in_new_loc.push_back(it->first);
            }
        }
        bool bumped = false;
        for(int i = 0; i < entities_in_new_loc.size(); i++)
        {
            if(!can_be_passed_thru->at(entities_in_new_loc[i])->passable)
            {
                bump_Into(id, can_be_passed_thru->at(entities_in_new_loc[i])->id);
                bumped = true;
            }
        }
        if(bumped) return false;
        //change entity new location
        locations->at(id)->y = temp_y;
        locations->at(id)->x = temp_x;
    }
    return true;
}

//more complicated than it needs to be, will be using vector with each "tile" containing a separate vector for entities in that location.