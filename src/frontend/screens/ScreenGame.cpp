#include "ScreenGame.hpp"

ScreenGame::ScreenGame() {
    rectangle.setSize(sf::Vector2f(120.f, 50.f));
    rectangle.setPosition({100.f, 100.f});
    rectangle.setFillColor(sf::Color::Green);
}

void ScreenGame::update() {}

void ScreenGame::render(sf::RenderWindow* window) {
    window->clear(sf::Color::Black);
    window->draw(rectangle);
    window->display();
}