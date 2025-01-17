//
// Created by oyz on 2025/1/17.
//


#include "Application.h"
#include <iostream>

Application::Application(const std::string& title, int width, int height)
        : m_Window(nullptr), m_GraphicsContext(nullptr), m_UIManager(nullptr), m_Running(true) {
    m_Window = new Window(title, width, height);
    m_GraphicsContext = new GraphicsContext(m_Window->GetGLFWWindow());
    m_UIManager = new UIManager(m_Window->GetGLFWWindow());
}

Application::~Application() {
    delete m_UIManager;
    delete m_GraphicsContext;
    delete m_Window;
}

void Application::Init() {
    m_Window->Init();
    m_GraphicsContext->Init();
    m_UIManager->Init();
}

void Application::MainLoop() {
    while (!m_Window->ShouldClose() && m_Running) {
        m_Window->PollEvents();

        // 渲染前设置
        m_GraphicsContext->Clear();

        // UI 开始帧
        m_UIManager->BeginFrame();

        // 子类渲染
        Render();

        // UI 结束帧
        m_UIManager->EndFrame();

        m_Window->SwapBuffers();
    }
}

void Application::Run() {
    Init();
    MainLoop();
}
