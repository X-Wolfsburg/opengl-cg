#include "GraphicsContext.h"
#include <iostream>

GraphicsContext::GraphicsContext(GLFWwindow* window) : m_Window(window) {}

GraphicsContext::~GraphicsContext() {}

void GraphicsContext::Init() {
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD!" << std::endl;
        exit(EXIT_FAILURE);
    }
    glEnable(GL_DEPTH_TEST);
}

void GraphicsContext::Clear() {
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

