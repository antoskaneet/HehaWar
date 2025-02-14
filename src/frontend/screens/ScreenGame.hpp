#pragma once

#include <SFML/Graphics.hpp>
#include "../engine/ScreenManager.hpp"

class ScreenGame : public Screen {
private:
    sf::RectangleShape rectangle;
    
public:
    ScreenGame();
    void update() override;
    void render(sf::RenderWindow* window) override;

};