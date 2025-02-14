#pragma once

#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "../window/WindowManager.hpp"



class Screen {
    
public:
    virtual void update() = 0;
    virtual void render(sf::RenderWindow* window) = 0;
    virtual ~Screen() = default;
};


class ScreenManager {
private:
    std::vector<std::shared_ptr<Screen>> screens;
    int currentScreenIndex;

public:
    ScreenManager();

    void pushScreen(std::shared_ptr<Screen> screen);
    void popScreen();
    void changeScreen(std::shared_ptr<Screen> newScreen);

    void update();
    void draw(sf::RenderWindow* window);

    ~ScreenManager();
};
