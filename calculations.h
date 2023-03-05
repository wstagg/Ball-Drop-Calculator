//
//  calculations.hpp
//  ball_drop
//
//  Created by Wesley Stagg on 08/01/2023.
//

#ifndef calculations_h
#define calculations_h

double calculate_terminal_velocity(double mass, double area);
double calculate_free_fall_time (double mass, double height);
void calculate_distance_fallen (double height, double fall_time);
double calculate_projected_area (double diameter);


#endif /* calculations_hpp */
