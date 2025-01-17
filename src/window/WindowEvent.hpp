#pragma once


class WindowEvent {
public:
    WindowEvent(sf::RenderWindow &window);
    void pollEvent();

private:
    bool Fullscreen = true;
    sf::RenderWindow& window;
};