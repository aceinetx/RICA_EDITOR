#pragma  once

#include "../../lib/rlImGui/rlImGui.h"
#include "imgui.h"
#include<string>

class Window{

public:

Window();
~Window();

ImGuiStyle& GetStyle() const;
void setstyle(ImGuiStyle& style);
void setstyle(const std::string& path);

void init();
void shutdown();

void setFPS(int fps);
int getFPS();

void setScreenWidth(int width);
int getScreenWidth();

void setScreenHeight(int height);
int getScreenHeight();

void setName(std::string name);
std::string getName(); 

private:
ImGuiStyle style;
bool styleWasModifiedByUser=false;

int width=0;
int height=0;

std::string name;

int FPS=0;



void SetRicaEditorStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();

    // --- Настройка размеров и отступов ---
    style.WindowRounding = 17.0f;
    style.FrameRounding = 6.0f;
    style.PopupRounding = 6.0f;
    style.GrabRounding = 6.0f;
    style.FrameBorderSize = 0.0f;
    style.WindowBorderSize = 0.0f;
    style.WindowPadding = ImVec2(10, 10);
    style.ItemSpacing = ImVec2(8, 6);
    style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
    style.ScrollbarSize = 10.0f;

    // --- Цветовая палитра ---
    // #1F1F1F - Основной Фон
    ImVec4 color_background = ImVec4(0.12f, 0.12f, 0.12f, 1.00f); 
    // #2C2C2C - Поверхность/Карточки
    ImVec4 color_surface = ImVec4(0.17f, 0.17f, 0.17f, 1.00f);
    // #524D45 - ИНТЕРАКТИВНЫЕ ЭЛЕМЕНТЫ (Warm Graphite)
    ImVec4 color_interactive_normal = ImVec4(0.322f, 0.302f, 0.271f, 1.00f); 
    
    // 🌟 НОВЫЙ ТЕПЛЫЙ, ТУСКЛЫЙ ТЕКСТ 🌟
    // #D8D3CC - Основной Текст (Бежеватый/Серый)
    ImVec4 color_text_main = ImVec4(0.85f, 0.83f, 0.80f, 1.00f); 
    // #9E9E9E - Второстепенный Текст
    ImVec4 color_text_secondary = ImVec4(0.62f, 0.62f, 0.62f, 1.00f);
    // #757575 - Наведение (Hovered)
    ImVec4 color_hover_mono = ImVec4(0.46f, 0.46f, 0.46f, 1.00f); 
    // 🌟 НОВЫЙ АКТИВНЫЙ АКЦЕНТ 🌟
    // #FFFFF0 - Активное состояние (Почти чистый Белый, чтобы избежать слипания с текстом)
    ImVec4 color_active_mono = ImVec4(1.00f, 1.00f, 0.94f, 1.00f);

    ImVec4* colors = style.Colors;

    // Фон и Текст
    colors[ImGuiCol_Text]             = color_text_main; // ТЕПЛЫЙ ТУСКЛЫЙ ТЕКСТ
    colors[ImGuiCol_TextDisabled]     = color_text_secondary;
    colors[ImGuiCol_WindowBg]         = color_background;
    colors[ImGuiCol_MenuBarBg]        = color_background;
    colors[ImGuiCol_TitleBg]          = color_background;
    colors[ImGuiCol_TitleBgActive]    = color_surface;
    colors[ImGuiCol_PopupBg]          = color_surface;
    colors[ImGuiCol_Border]           = color_interactive_normal;

    // --- Интерактивные элементы (Нормальное состояние) ---
    // Кнопки, Фоны фреймов, Ползунки, Скроллбары, Невыбранные заголовки
    colors[ImGuiCol_Button]           = color_interactive_normal;
    colors[ImGuiCol_FrameBg]          = color_interactive_normal;
    colors[ImGuiCol_SliderGrab]       = color_interactive_normal;
    colors[ImGuiCol_ScrollbarGrab]    = color_interactive_normal;
    colors[ImGuiCol_Header]           = color_interactive_normal; 
    
    // Фоны при наведении/активации
    colors[ImGuiCol_FrameBgHovered]   = color_surface; 
    colors[ImGuiCol_FrameBgActive]    = color_surface; 
    
    // --- Наведение (Hovered - #757575) ---
    colors[ImGuiCol_ButtonHovered]    = color_hover_mono;
    colors[ImGuiCol_HeaderHovered]    = color_hover_mono;
    colors[ImGuiCol_ScrollbarGrabHovered] = color_hover_mono;
    colors[ImGuiCol_SeparatorHovered] = color_hover_mono;

    // --- Активное состояние (Active/Selected - #FFFFF0) ---
    // Активные кнопки, чекбоксы, ползунки, выбранные заголовки - используем #FFFFF0
    colors[ImGuiCol_ButtonActive]     = color_active_mono;
    colors[ImGuiCol_HeaderActive]     = color_active_mono; 
    colors[ImGuiCol_CheckMark]        = color_active_mono;
    colors[ImGuiCol_SliderGrabActive] = color_active_mono;
    colors[ImGuiCol_ScrollbarGrabActive]  = color_active_mono;
    colors[ImGuiCol_SeparatorActive]  = color_active_mono;
}
};
