#include "../included.hpp"

#include <string>
#include <vector>
#include <memory>


class ScenePanel : public Panel {
public:
    ScenePanel() : Panel("Scene") {}

protected:
    void DrawContent() override {
        ImGui::Text("This is the Scene Panel.");
        
        if (ImGui::Button("Click Me")) {
            TraceLog(LOG_INFO, "Button 'Click Me' was pressed!");
        }
        
        static float rotation = 0.0f;
        ImGui::SliderFloat("Rotation Angle", &rotation, 0.0f, 360.0f);
    }
};

class HierarchyPanel : public Panel {
public:
    HierarchyPanel() : Panel("Hierarchy") {}

protected:
    void DrawContent() override {
        ImGui::Text("Objects in the scene:");
        
        ImGui::Selectable("Main Camera");
        ImGui::Selectable("Cube 1");
        ImGui::Selectable("Light Source");
    }
};


int main() {
    Window win1;
    win1.setFPS(60);
    win1.setName("test");
    win1.setScreenHeight(920);
    win1.setScreenWidth(920);
    win1.GetStyle().Colors[ImGuiCol_WindowBg]=ImVec4(0.12f, 0.12f, 0.12f, 1.00f);      
    win1.init();

    std::vector<std::shared_ptr<Panel>> panels;
    panels.push_back(std::make_shared<ScenePanel>());
    panels.push_back(std::make_shared<HierarchyPanel>()); 

    // Главный цикл
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE); 

        rlImGuiBegin();

        for (auto& panel : panels) {
            panel->Draw();
        }

        rlImGuiEnd();
        
        EndDrawing();
    }

    // 4. Очистка
    rlImGuiShutdown();
    CloseWindow();
 
    return 0;
}