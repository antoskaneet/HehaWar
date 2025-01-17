#include <iostream>
#include "window/WindowEvent.hpp"
#include "window/WindowSetting.hpp"
#include "engine/Mainloop.hpp"

int main() {
    WindowSetting windowSetting;
    WindowEvent windowEvent(windowSetting.getWindow());
    Mainloop mainloop(windowSetting.getWindow(), windowEvent);
    mainloop.run();
    return 0;
}