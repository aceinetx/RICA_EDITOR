#include "Panel.hpp"
#include "../../included.hpp"

Panel::Panel(const std::string& name) : name(name), isVisible(true) {}

void Panel::setIsVisible(bool visible) {
    isVisible = visible;
}

bool Panel::getIsVisible() const {
    return isVisible;
}

void Panel::setName(const std::string& newName) {
    name = newName;
}

std::string Panel::getName() const {
    return name;
}

void Panel::Draw() {
    if (!isVisible) return;

    ImGui::Begin(name.c_str(), &isVisible);

    // Рисуем содержимое панели (переопределяется в дочернем классе)
    DrawContent();

    ImGui::End();
}
