//
// Created by oyz on 2025/1/17.
//



#ifndef APPLICATION_H
#define APPLICATION_H

#include "GraphicsContext.h"
#include "Windows.h"

#include "UIManager.h"

class Application {
public:
    Application(const std::string& title, int width, int height);
    virtual ~Application();

    void Run();

protected:
    virtual void Render() = 0; // 纯虚函数，让子类实现

private:
    void Init();      // 初始化子系统
    void MainLoop();  // 主循环

    Window* m_Window;
    GraphicsContext* m_GraphicsContext;
    UIManager* m_UIManager;

    bool m_Running;
};

#endif // APPLICATION_H



