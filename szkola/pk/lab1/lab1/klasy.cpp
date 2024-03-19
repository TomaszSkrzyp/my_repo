#include <iostream>
#include <string>

class Window {
private:
    static int totalWindows;
    static int currentWindows;
    int posX, posY, width, height;

public:
    Window(int x, int y, int w, int h)
        : posX(x), posY(y), width(w), height(h) {
        totalWindows++;
        currentWindows++;
        std::cout << "Window constructed. Total windows: " << totalWindows << ", Current windows: " << currentWindows << std::endl;
    }

    ~Window() {
        currentWindows--;
        std::cout << "Window destructed. Current windows: " << currentWindows << std::endl;
    }

    static int getTotalWindows() {
        return totalWindows;
    }

    static int getCurrentWindows() {
        return currentWindows;
    }

    void resizeToFitControls() {
        // Implementacja zmiany rozmiaru okna
        std::cout << "Window resized to fit controls." << std::endl;
    }
};

int Window::totalWindows = 0;
int Window::currentWindows = 0;

class TextField {
private:
    int posX, posY, width, height;
    std::string text;

public:
    TextField(int x, int y, int w, int h, const std::string& t)
        : posX(x), posY(y), width(w), height(h), text(t) {
        std::cout << "Text field constructed." << std::endl;
    }

    ~TextField() {
        std::cout << "Text field destructed." << std::endl;
    }
};

class Button {
private:
    int posX, posY, width, height;
    std::string label;

public:
    Button(int x, int y, int w, int h, const std::string& l)
        : posX(x), posY(y), width(w), height(h), label(l) {
        std::cout << "Button constructed." << std::endl;
    }

    ~Button() {
        std::cout << "Button destructed." << std::endl;
    }
};

int main() {
    Window mainWindow(100, 100, 300, 200);
    Button mainButton(20, 20, 100, 30, "Click me");
    TextField mainTextField(20, 70, 200, 100, "Enter text here");
    mainWindow.resizeToFitControls();

    return 0;
}