#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Window {
public:
    Window();
    
    void run();
    

private:
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window;
    bool m_isRunning;
    void processEvents();
};


