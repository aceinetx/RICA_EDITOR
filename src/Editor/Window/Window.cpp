#include "Window.hpp" 


Window::Window() :
    width(800),              
    height(600),              
    name("Raylib ImGui Window"),
    FPS(60)
{
}

Window::~Window()
{
}


void Window::init()
{
    SetTargetFPS(FPS);

    InitWindow(width, height, name.c_str());

    rlImGuiSetup(true); 

    if(styleWasModifiedByUser){
        ImGui::GetStyle() = style;
    }
    else{
        SetRicaEditorStyle();
    }
}

void Window::shutdown()
{
    rlImGuiShutdown();

    CloseWindow();
}


void Window::setFPS(int fps)
{
    FPS = fps;
    if (IsWindowReady()) {
        SetTargetFPS(FPS);
    }
}

int Window::getFPS() 
{
    return FPS;
}

void Window::setScreenWidth(int width)
{
    this->width = width;
}

int Window::getScreenWidth() 
{
    return width;
}

void Window::setScreenHeight(int height)
{
    this->height = height;
}

int Window::getScreenHeight() 
{
    return height;
}

void Window::setName(std::string name)
{
    this->name = name;
    if (IsWindowReady()) {
        SetWindowTitle(this->name.c_str()); 
    }
}

std::string Window::getName() 
{
    return name;
}


ImGuiStyle& Window::GetStyle() const
{
    return const_cast<ImGuiStyle&>(style);
}

void Window::setstyle(ImGuiStyle& newStyle)
{
    style = newStyle;
    if (IsWindowReady()) {
        ImGui::GetStyle() = style;
    }

    styleWasModifiedByUser=true;
}
