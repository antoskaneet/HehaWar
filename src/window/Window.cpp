#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

Window::Window() {
    window.create(sf::VideoMode(desktopMode), "HehaWar", sf::Style::Default, sf::State::Fullscreen);
}

void Window::run() {
    while (window.isOpen())
    {
        processEvents();
    }
}

void Window::processEvents() {
    while (const std::optional event = window.pollEvent())
    {
        if (event->is<sf::Event::Closed>()){
                window.close();
        }
    }
}