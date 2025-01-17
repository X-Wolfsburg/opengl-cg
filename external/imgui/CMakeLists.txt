# 指定 ImGui 源代码路径
file(GLOB IMGUI_SRC
    external/imgui/imgui.cpp
    external/imgui/imgui_draw.cpp
    external/imgui/imgui_tables.cpp
    external/imgui/imgui_widgets.cpp
)

# 需要的其他源文件和包含目录
include_directories(external/imgui)


# 将 ImGui 源文件添加到目标
target_sources(${PROJECT_NAME} PRIVATE ${IMGUI_SRC})
