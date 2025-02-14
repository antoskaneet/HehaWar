#include <SFML/Graphics.hpp>
#include "../engine/Mainloop.hpp"
#include "../engine/Event.hpp"
#include "../window/WindowManager.hpp"
#include "../engine/ScreenManager.hpp"
#include "../frontend/screens/MainMenu.hpp"

void Mainloop::run() {
    ScreenManager screenManager; //времено
    Event Event(screenManager);  // Передаем ссылку на ScreenManager
    sf::RenderWindow* window = WindowManager::getWindow();

    auto mainMenu = std::make_shared<MainMenu>();
    screenManager.pushScreen(mainMenu);

    while (window->isOpen()) {
        Event.pollEvent();

        screenManager.update();
        screenManager.draw(window);


    }

    WindowManager::cleanup();
}