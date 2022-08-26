#pragma once

#include "Core.h"

namespace Trout {

	class TROUT_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}


