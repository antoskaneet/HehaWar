#include "Event.hpp"


void Event::pollEvent() {
    sf::RenderWindow* window = WindowManager::getWindow();


    while (const std::optional<sf::Event> event = window->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window->close();
        } else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if (keyPressed->scancode == sf::Keyboard::Scancode::F11) {
                windowEvent.toggleFullscreen();
            }
            if (keyPressed->scancode == sf::Keyboard::Scancode::H) {
                auto newScreen = std::make_shared<ScreenGame>();
                screenManager.popScreen();
            }
            if (keyPressed->scancode == sf::Keyboard::Scancode::G) {
                auto newScreen = std::make_shared<ScreenGame>();
                screenManager.changeScreen(newScreen);
            }
        }
    }
}