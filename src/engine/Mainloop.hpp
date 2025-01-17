#pragma once
#include "../window/WindowSetting.hpp"

class Mainloop {
private:
    sf::RenderWindow& window;
    WindowEvent& windowEvent;
public:
    Mainloop(sf::RenderWindow& window, WindowEvent& windowEvent);
    void run();
};