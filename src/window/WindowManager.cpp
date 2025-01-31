#include "WindowManager.hpp"

sf::RenderWindow* WindowManager::window = nullptr;

sf::RenderWindow* WindowManager::getWindow () {
    if (window == nullptr) {
        window = new sf::RenderWindow(sf::VideoMode({800, 600}), "SFML Window");
    }
    return window;
}

void WindowManager::cleanup() {
    if (window) {
        delete window;
        window = nullptr;
    }
}