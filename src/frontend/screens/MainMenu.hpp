#pragma once
#include <SFML/Graphics.hpp>
#include "../engine/ScreenManager.hpp"

class MainMenu : public Screen {
private:
    sf::RectangleShape rectangle;

public:
    MainMenu();
    void update() override;
    void render(sf::RenderWindow* window) override;
};