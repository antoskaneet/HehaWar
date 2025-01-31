#include "../window/WindowEvent.hpp"
#include <SFML/Graphics.hpp>
#include "../window/WindowManager.hpp"





void WindowEvent::toggleFullscreen() {
    sf::RenderWindow* window = WindowManager::getWindow();
    if (isFullscreen) {
        window->create(
            sf::VideoMode({1366, 768}), 
            "HehaWar", 
            sf::State::Fullscreen);
    } else {
        window->create(
            sf::VideoMode({1366, 768}), 
            "HehaWar", 
            sf::Style::Default);
    }
    isFullscreen = !isFullscreen;
}
