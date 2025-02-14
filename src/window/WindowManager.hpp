#pragma once

#include <SFML/Graphics.hpp>

class WindowManager {

private:
    WindowManager() = default;
    static sf::RenderWindow* window;

public:
    static sf::RenderWindow* getWindow();
    static void cleanup();  
};
