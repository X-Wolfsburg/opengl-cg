

#include "framework/Application.h"
#include <imgui.h>

class MyApp : public Application {
public:
    MyApp() : Application("ImGui Framework", 800, 600) {}

protected:
    void Render() override {
        ImGui::Begin("Hello, ImGui!");
        ImGui::Text("This is a simple text in ImGui.");
        ImGui::End();
    }
};

int main() {
    MyApp app;
    app.Run();
    return 0;
}
