#include <iostream> 
#include <cmath> 

int main() {

    double room_area, roll_length, roll_width, roll_price, window_area;

    std::cout << "enter the area of the room(in sq. m): ";
    std::cin >> room_area;

    std::cout << "enter the length of the wallpaper roll (in m): ";
    std::cin >> roll_length;

    std::cout << "enter the width of the wallpaper roll (in m): ";
    std::cin >> roll_width;

    std::cout << "enter the price of a roll of wallpaper (in uah): ";
    std::cin >> roll_price;

    std::cout << "enter the total area of windows (in sq. m): ";
    std::cin >> window_area;

    double wall_area = room_area - window_area;

    int rolls_needed = ceil(wall_area / (roll_length * roll_width));

    double total_cost = rolls_needed * roll_price;

    std::cout << "for covering walls: " << wall_area << " sq. m will need:" << std::endl;
    std::cout << "number of wallpaper rolls: " << rolls_needed << " rolls" << std::endl;
    std::cout << "total cost: " << total_cost << " uah" << std::endl;

    return 0;
}