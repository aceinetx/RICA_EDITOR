#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h> // Подключение ImGui и бэкенда для raylib
#include <rlgl.h>

constexpr const int FPS = 60;

int main() {
  // Инициализация Raylib
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "Raylib ImGui Example");
  SetTargetFPS(FPS);

  // Инициализация ImGui (с использованием бэкенда raylib)
  rlImGuiSetup(true);

  // Переменная для окна ImGui
  bool show_demo_window = true;
  Color raylib_color = SKYBLUE;

  // Главный игровой цикл
  while (!WindowShouldClose()) {
    // 1. Обновление (логика)
    // ...

    // 2. Отрисовка
    BeginDrawing();
    ClearBackground(raylib_color);

    // Начать кадр ImGui
    rlImGuiBegin();

    // Окно 1: Демонстрационное окно ImGui
    if (show_demo_window)
      ImGui::ShowDemoWindow(&show_demo_window);

    // Окно 2: Наше собственное окно
    ImGui::Begin("My Custom Window");

    ImGui::Text("Hello from ImGui!");

    // Кнопка для смены цвета фона Raylib
    if (ImGui::Button("Change Raylib Background")) {
      raylib_color = (raylib_color.r == SKYBLUE.r) ? LIME : SKYBLUE;
    }

    ImGui::Checkbox("Show Demo Window", &show_demo_window);

    ImGui::End();

    // Завершить кадр ImGui
    rlImGuiEnd();

    EndDrawing();
  }

  // Завершение работы ImGui
  rlImGuiShutdown();

  // Завершение работы Raylib
  CloseWindow();

  return 0;
}