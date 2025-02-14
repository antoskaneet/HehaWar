#include "ScreenManager.hpp"


ScreenManager::ScreenManager() : currentScreenIndex(0) {}

void ScreenManager::pushScreen(std::shared_ptr<Screen> screen) {
    screens.push_back(screen);
}

void ScreenManager::popScreen() {
    if (screens.size() > 1) {
        screens.pop_back();
        currentScreenIndex = screens.size() - 1;
    }
}

void ScreenManager::changeScreen(std::shared_ptr<Screen> newScreen) {
    // screens.clear();
    screens.push_back(newScreen);
    currentScreenIndex = 0;
}

void ScreenManager::update() {
    screens[currentScreenIndex]->update();
}

void ScreenManager::draw(sf::RenderWindow* window) {
    screens[currentScreenIndex]->render(window);
}

ScreenManager::~ScreenManager() = default;
