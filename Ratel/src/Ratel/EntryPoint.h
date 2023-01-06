#pragma once

#ifdef RATEL_PLATFORM_WINDOWS

extern Ratel::Application* Ratel::CreateApplication();
int main(int argc, char** argv)
{
	printf("Ratel Engine\n");
	auto app = Ratel::CreateApplication();
	app->Run();
	delete app;
}
#endif // RATEL_PLATFORM_WINDOWS

