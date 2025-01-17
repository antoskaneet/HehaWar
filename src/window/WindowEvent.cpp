#include "../window/WindowEvent.hpp"
#include "../window/WindowSetting.hpp"
#include <SFML/Graphics.hpp>

WindowEvent::WindowEvent(sf::RenderWindow& window) : window(window) {}

void WindowEvent::pollEvent() {
    while (const std::optional<sf::Event> event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window.close();
        } else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if (keyPressed->scancode == sf::Keyboard::Scancode::F11) {
                if (Fullscreen) {
                    window.create(
                        sf::VideoMode({1366, 768}), 
                        "HehaWar", 
                        sf::State::Fullscreen);
                } else {
                    window.create(
                        sf::VideoMode({1366, 768}), 
                        "HehaWar", 
                        sf::Style::Default);
                }
                Fullscreen = !Fullscreen;
            }
        }
    }
}
