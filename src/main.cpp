#include <ncurses.h>
#include <vector>
#include <unordered_map>
#include "../lib/Components/Location.h"
#include "../lib/Components/Tilemap.h"
#include "../lib/Components/Passable.h"

int main(){
    std::vector<int> entity;
    Tilemap map;
    std::unordered_map<int, Passable*> can_be_passed_thru;
    std::unordered_map<int, Location*> locations;
    return 0;
}