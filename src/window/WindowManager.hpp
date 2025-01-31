#pragma once

#include <SFML/Graphics.hpp>

class WindowManager {

private:
    static sf::RenderWindow* window;
    WindowManager () = default;

public:
    static sf::RenderWindow* getWindow  ();
    static void cleanup();
};
