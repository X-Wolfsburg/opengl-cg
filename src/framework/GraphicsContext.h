//
// Created by oyz on 2025/1/17.
//

#ifndef GRAPHICSCONTEXT_H
#define GRAPHICSCONTEXT_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>


class GraphicsContext {
public:
    explicit GraphicsContext(GLFWwindow* window);
    ~GraphicsContext();

    void Init();
    void Clear();

private:
    GLFWwindow* m_Window;
};

#endif // GRAPHICSCONTEXT_H

