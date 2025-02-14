#pragma once
#include <SFML/Graphics.hpp>

class WindowEvent {
private:
    bool isFullscreen = true;
public:
    void toggleFullscreen();
};