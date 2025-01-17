#include "../window/WindowSetting.hpp"
#include <SFML/Graphics.hpp>

WindowSetting::WindowSetting() {
    sf::VideoMode HD({1366, 768});
    window.create(HD, "HehaWar", sf::State::Fullscreen);
    window.setFramerateLimit(60);
}

sf::RenderWindow& WindowSetting::getWindow() {
    return window;
}