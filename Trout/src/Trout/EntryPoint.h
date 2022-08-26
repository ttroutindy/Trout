#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern Trout::Application* Trout::CreateApplication();

void main(int argc, char** argv) {
	auto app = Trout::CreateApplication();
	app->Run();
	delete app;
}

#endif // TE_PLATFORM_WINDOWS
