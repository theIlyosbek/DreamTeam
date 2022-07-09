#pragma once

#ifdef DREAM_PLATFORM_WINDOWS

extern Dream::Application* Dream::CreateApplication();

int main(int argc, char** argv)
{
	Dream::Log::Init();
	DT_CORE_WARN("Intitalized Log!");
	DT_INFO("Hello");

	auto app = Dream::CreateApplication();
	app->Run();
	delete app;
}

#endif