#include <raylib.h>
#include <rlgl.h>
#include "rlImGui.h"// Подключение ImGui и бэкенда для raylib

int main()
{
    // Инициализация Raylib
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib ImGui Example");
    SetTargetFPS(60);

    // Инициализация ImGui (с использованием бэкенда raylib)
    SetupRLImGui(true); // true для включения темного стиля

    // Переменная для окна ImGui
    bool show_demo_window = true;
    Color raylib_color = SKYBLUE;

    // Главный игровой цикл
    while (!WindowShouldClose())
    {
        // 1. Обновление (логика)
        // ...

        // 2. Отрисовка
        BeginDrawing();
            ClearBackground(raylib_color);

            // Начать кадр ImGui
            BeginRLImGui();

                // Окно 1: Демонстрационное окно ImGui
                if (show_demo_window)
                    ImGui::ShowDemoWindow(&show_demo_window);

                // Окно 2: Наше собственное окно
                ImGui::Begin("My Custom Window");
                
                ImGui::Text("Hello from ImGui!");
                
                // Кнопка для смены цвета фона Raylib
                if (ImGui::Button("Change Raylib Background"))
                {
                    raylib_color = (raylib_color.r == SKYBLUE.r) ? LIME : SKYBLUE;
                }
                
                ImGui::Checkbox("Show Demo Window", &show_demo_window);
                
                ImGui::End();

            // Завершить кадр ImGui
            EndRLImGui();

        EndDrawing();
    }

    // Завершение работы ImGui
    ShutdownRLImGui();

    // Завершение работы Raylib
    CloseWindow();

    return 0;
}