#include <Ratel.h>

class Sandbox : public Ratel::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}

};

Ratel::Application* Ratel::CreateApplication()
{
	return new Sandbox();
}