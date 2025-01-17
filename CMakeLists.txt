cmake_minimum_required(VERSION 3.30.5)


# 设置项目名称
project(opengl_cg)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

set(GLAD_PATH "D:/code/opengl-cg/external/glad")
set(GLFW_PATH "D:/code/opengl-cg/external/glfw")
set(SOURCE
        ${GLAD_PATH}/src/glad.c
        src/framework/Application.cpp
        src/framework/Application.h
        src/framework/Windows.cpp
        src/framework/Windows.h
        src/framework/GraphicsContext.cpp
        src/framework/GraphicsContext.h
        src/framework/UIManager.cpp
        src/framework/UIManager.h
)


# 添加 GLFW 目录
add_subdirectory(external/glfw)
#add_subdirectory(external/gl3w)



# 查找 OpenGL
find_package(OpenGL REQUIRED)

# 添加 ImGui 源代码
file(GLOB IMGUI_SRC
        external/imgui/imgui.cpp
        external/imgui/imgui_draw.cpp
        external/imgui/imgui_tables.cpp
        external/imgui/imgui_widgets.cpp
        external/imgui/backends/imgui_impl_glfw.cpp
        external/imgui/backends/imgui_impl_opengl3.cpp
)
#file(GLOB GL3W_SRC
#        external/gl3w/src/gl3w.c
#)
# 创建可执行文件
add_executable(${PROJECT_NAME}
        src/main.cpp
        ${SOURCE}
)

# 包含 ImGui 头文件
include_directories(
        external/imgui
#        external/gl3w/include
        ${GLFW_PATH}/include
        ${GLAD_PATH}/include
)





# 将 ImGui 源代码添加到目标
target_sources(${PROJECT_NAME} PRIVATE ${IMGUI_SRC})
#target_sources(${PROJECT_NAME} PRIVATE ${GL3W_SRC})

# 链接库文件
target_link_libraries(${PROJECT_NAME} OpenGL::GL glfw)

# 设置链接器的输出目录
set_target_properties(${PROJECT_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
