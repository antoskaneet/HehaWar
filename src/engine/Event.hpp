#pragma once

#include "../window/WindowManager.hpp"
#include <SFML/Graphics.hpp>
#include "../window/WindowEvent.hpp"

class Event {
public:
    void pollEvent();
};