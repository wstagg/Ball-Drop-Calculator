#include <iostream>
#include <string_view>
#include <iomanip>

#include "inputs.h"
#include "calculations.h"


int main(void)
{
    std::string_view welcome {"Welcome to ball drop!\n"};
    
    std::cout << welcome;

    std::cout << "Please enter a ball mass in KG: ";
    double ball_mass { get_input() };
    
    std::cout << "\nPlease enter a drop height in meters: ";
    double drop_height { get_input() };
    
    double freefall_time { calculate_free_fall_time(ball_mass, drop_height) };
    //std :: cout << freefall_time << " seconds\n";
    std::cout << std::setprecision(4);
    std::cout << "\nA ball weighing "<< ball_mass <<"kg dropped from "<<
                   drop_height <<" meters,\n" << "will take "<< freefall_time <<
                   " seconds to hit the ground.\n";
    
    calculate_distance_fallen (drop_height, freefall_time); 
    
    return 0;
}
