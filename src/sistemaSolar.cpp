#include "sistemaSolar.h"

SistemaSolar::SistemaSolar(){
    window = {1920, 1080};
    InitWindow(window.x, window.y, "Sistema Solar");
    SetTargetFPS(60);
    center = {GetScreenWidth() / 2.f, GetScreenHeight() / 2.f};

    planet_radius = {80, 110, 165, 225, 310, 430, 515, 565};
    planet_velocities = {1.607f, 1.174f, 1.f, 0.802f, 0.434f,
    0.323f, 0.228f, 0.182f};
    planet_sizes = {10, 15, 20, 18, 60, 55, 25, 22};
    colors = {
        {115, 147, 179, 255},
        {255, 87, 51, 255},
        {30, 144, 255, 255},
        {178, 34, 34, 255},
        {210, 105, 30, 255},
        {220, 20, 60, 255},
        {72, 209, 204, 255},
        {65, 105, 255, 255}
    };
    planet_angle.assign(8, 0);

    moon_angle = {0};
    for(size_t i = 0; i < planet_sizes.size(); i++){
        if(planet_sizes[i] == 20){
            earth_pos = i;
        }
    }

    full_screen = {false};
}

void SistemaSolar::run()
{
    while(!WindowShouldClose()) {

        if(IsKeyPressed(KEY_F11)){
            full_screen = !full_screen;
            if(full_screen){
                int monitor = GetCurrentMonitor();
                SetWindowSize(GetMonitorWidth(monitor), GetMonitorHeight(monitor));
                ToggleFullscreen();
            }else{
                ToggleFullscreen();
                SetWindowSize(window.x, window.y);
            }
        }

        for(size_t i = 0; i < planet_radius.size(); i++){
            planet_angle[i] += planet_velocities[i] * 0.02f;
        }

        moon_angle += moon_velocity * 0.009f;

        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircleV(center, sun_size, YELLOW);

        for(size_t i = 0; i < planet_radius.size(); i++){
            DrawRing(center, planet_radius[i] - 1, planet_radius[i] + 1, 0, 360, 100, Color{60, 60, 60, 255});
            
            Vector2 planet_pos = {
                center.x + std::cos(planet_angle[i]) * planet_radius[i],
                center.y + std::sin(planet_angle[i])  * planet_radius[i]
            };
            DrawCircleV(planet_pos, planet_sizes[i], colors[i]);
            
            if((int)i == earth_pos){
                DrawRing(planet_pos, moon_radius - 1, moon_radius + 1, 0, 360, 100, Color{60, 60, 60, 255});
            

                Vector2 moon_pos = {
                    planet_pos.x + std::cos(moon_angle) * moon_radius,
                    planet_pos.y + std::sin(moon_angle)  * moon_radius
                };
                DrawCircleV(moon_pos, moon_size, WHITE);
            }
        }
        EndDrawing();
    }
    CloseWindow();
}

