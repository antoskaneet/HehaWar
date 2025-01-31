#include "Event.hpp"


void Event::pollEvent() {
    WindowEvent windowEvent;
    sf::RenderWindow* window = WindowManager::getWindow();

    while (const std::optional<sf::Event> event = window->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window->close();
        } else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if (keyPressed->scancode == sf::Keyboard::Scancode::F11) {
                windowEvent.toggleFullscreen();
            }
        }
    }
}