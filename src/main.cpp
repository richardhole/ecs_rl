#include <ncurses.h>
#include <vector>
#include <unordered_map>
#include "../lib/Components/Location.h"
#include "../lib/Components/Tilemap.h"
#include "../lib/Components/Passable.h"
#include "../lib/Components/Tile.h"

int main(){
    std::vector<int> entity;
    std::vector<Tile*> tiles;
    std::unordered_map<int, Passable*> can_be_passed_thru;
    std::unordered_map<int, Location*> locations;
    return 0;
}