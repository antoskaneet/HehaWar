#include "MainMenu.hpp"

MainMenu::MainMenu() {
    rectangle.setSize(sf::Vector2f(120.f, 50.f));
    rectangle.setPosition({100.f, 100.f});
    rectangle.setFillColor(sf::Color::Red);
}

void MainMenu::update() {
}

void MainMenu::render(sf::RenderWindow* window) {
    window->clear(sf::Color::Black);
    window->draw(rectangle);
    window->display();
}