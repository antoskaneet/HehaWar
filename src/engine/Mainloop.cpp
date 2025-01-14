#include "../engine/Mainloop.hpp"
#include <SFML/Graphics.hpp>

void Mainloop::run() {
    sf::RenderWindow window;
    sf::VideoMode HD({1366, 768});
    window.create(sf::VideoMode(HD), "HehaWar", sf::Style::Default, sf::State::Fullscreen);
    window.setFramerateLimit(60);
    bool Fullscreen = true;

    while (window.isOpen()) {
        while (const std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            } else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
                if (keyPressed->scancode == sf::Keyboard::Scancode::F11) {
                    if (Fullscreen) {
                        window.create(
                            sf::VideoMode(HD), 
                            "HehaWar", 
                            sf::State::Fullscreen);
                    } else {
                        window.create(
                            sf::VideoMode(HD), 
                            "HehaWar", 
                            sf::Style::Default);
                    }
                    Fullscreen = !Fullscreen;
                }
            }
        }
        window.clear();
        
        window.display();
    }
}