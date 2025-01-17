#pragma once;
#include <SFML/Graphics.hpp>

class WindowSetting {
public:
    WindowSetting();
    sf::RenderWindow& getWindow();

private:
    sf::RenderWindow window;
};