#pragma once

#include "Core.h"

namespace Ratel
{
	class RATEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

