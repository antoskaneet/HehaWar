#pragma once

#include "../window/WindowManager.hpp"
#include <SFML/Graphics.hpp>
#include "../window/WindowEvent.hpp"
#include "../engine/ScreenManager.hpp" // времено
#include "ScreenGame.hpp"

class Event {
private:
    WindowEvent windowEvent;
    ScreenManager& screenManager; // времено
public:
    Event(ScreenManager& sm) : screenManager(sm) {} // времено
    void pollEvent();
};