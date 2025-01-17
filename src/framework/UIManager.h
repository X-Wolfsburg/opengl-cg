#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

class UIManager {
public:
    explicit UIManager(GLFWwindow* window);
    ~UIManager();

    void Init();
    void BeginFrame();
    void EndFrame();

private:
    GLFWwindow* m_Window;
};

#endif // UIMANAGER_H

