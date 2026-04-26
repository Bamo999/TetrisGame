// TetrisGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <raylib.h>
#include "game.h"
#include "colors.h"

using std::cout;
using std::string;

const Color DarkBlue{
    44,
    44,
    127,
    255
};

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();

    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }

    return false;
};

int main()
{
    cout << "My tetris game!\n";

    const int screen_width = 500, screen_height = 620;
    InitWindow(screen_width, screen_height, "Bamo's Tetris's game");

    const int FPS = 60;
    SetTargetFPS(FPS);

    Font RobotoFont = LoadFontEx("Assets/Roboto-SemiBold.ttf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false) {

        game.HandleInput();

        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }

        BeginDrawing();

        ClearBackground(DarkBlue);

        DrawTextEx(RobotoFont, "Score", { 365, 15 }, 38, 2, WHITE);
        DrawRectangleRounded({ 320, 55, 170, 60 }, 0.3, 6, lightBlue);

        DrawTextEx(RobotoFont, "Next", { 370, 175 }, 38, 2, WHITE);
        DrawRectangleRounded({ 320, 215, 170, 180 }, 0.3, 6, lightBlue);

        if (game.gameOver) 
        {
            DrawTextEx(RobotoFont, "GAME OVER!", { 320, 420 }, 38, 2, WHITE);
        }

        game.Draw();

        EndDrawing();

    };

    CloseWindow();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
