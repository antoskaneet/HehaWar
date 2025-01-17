#include "../engine/Mainloop.hpp"
#include <SFML/Graphics.hpp>
#include "../window/WindowSetting.hpp"
#include "../window/WindowEvent.hpp"

Mainloop::Mainloop(sf::RenderWindow& window, WindowEvent& windowEvent) 
    : window(window), windowEvent(windowEvent) {}
void Mainloop::run() {
    while (window.isOpen()) {


        
        window.clear();
        
        window.display();
    }
}