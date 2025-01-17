框架设计思路
主类 Application：

负责管理主循环和初始化所有子系统（GLFW、GLAD、ImGui）。
提供一个虚方法 Render()，让子类实现具体的渲染逻辑。
窗口类 Window：

封装 GLFW 的窗口管理逻辑。
提供窗口尺寸、上下文设置、事件回调等功能。
图形上下文 GraphicsContext：

负责 OpenGL 上下文和渲染设置。
提供初始化和清理接口。
UI 层 UIManager：

集中管理 ImGui 的初始化、更新和绘制。