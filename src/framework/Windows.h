#ifndef WINDOW_H
#define WINDOW_H

#include <string>
#include <GLFW/glfw3.h>

class Window {
public:
    Window(const std::string& title, int width, int height);
    ~Window();

    void Init();
    void PollEvents() const;
    void SwapBuffers() const;

    bool ShouldClose() const;
    GLFWwindow* GetGLFWWindow() const;

private:
    GLFWwindow* m_Window;
    std::string m_Title;
    int m_Width;
    int m_Height;
};

#endif // WINDOW_H
