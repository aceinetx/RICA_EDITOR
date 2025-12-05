#pragma once
#include <string>

class Panel {
public:
    Panel(const std::string& name = "noName");
    virtual ~Panel() = default;

    void setIsVisible(bool visible);
    bool getIsVisible() const;

    void setName(const std::string& newName);
    std::string getName() const;

    // Основной метод для рисования панели
    virtual void Draw();

protected:
    // Чисто виртуальная функция для содержимого панели
    virtual void DrawContent() = 0;

private:
    bool isVisible;
    std::string name;
};
