#include <SFML/Graphics.hpp>

#include "../engine/Mainloop.hpp"
#include "../engine/Event.hpp"
#include "../window/WindowManager.hpp"

void Mainloop::run() {
    Event Event;
    sf::RenderWindow* window = WindowManager::getWindow();

    while (window->isOpen()) {
        Event.pollEvent();

        
        window->clear();
        
        window->display();
    }

    WindowManager::cleanup();
}