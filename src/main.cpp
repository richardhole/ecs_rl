#include <ncurses.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include "../lib/Components/Location.h"
#include "../lib/Components/Passable.h"
#include "../lib/Misc/Tile.h"

int main(){
    initscr();
    std::vector<int> entity;
    std::vector<Tile*> tiles;
    std::unordered_map<int, Passable*> can_be_passed_thru;
    std::unordered_map<int, Location*> locations;
    std::cout << "Hello, World!";
    return 0;
}