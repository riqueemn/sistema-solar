#pragma once 

#include "raylib.h"
#include <memory>
#include <vector>
#include <cmath>

class SistemaSolar {
    const float sun_size = 60.f;
    Vector2 window, center;
    
    std::vector<float> planet_radius, planet_sizes, 
    planet_velocities, planet_angle;
    std::vector<Color> colors;

    const float moon_size = 5, moon_radius = 30,
        moon_velocity = 10;
    float moon_angle;
    int earth_pos;

    bool full_screen;

    public:
        SistemaSolar();
        void run();
};