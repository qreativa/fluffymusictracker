// example raylib platform implementation

#include "raylib.h"

namespace platform {

    const int screenWidth = 800;
    const int screenHeight = 450;

    int ConstructWindow() {
        InitWindow(screenWidth, screenHeight,
                   "mrowrrrrr");
        SetTargetFPS(60);
        return 0;
    }

    int IdkTempDrawingFunction() {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("uwu nya mrrp", 190, 200, 20,
                    LIGHTGRAY);
        EndDrawing();
        return !WindowShouldClose();
    }

    int DestroyWindow() {
        CloseWindow();
        return 0;
    }
}
