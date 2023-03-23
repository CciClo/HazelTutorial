//#pragma once
#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public: 
		Application();

		virtual ~Application();

		void Run();

		void print();



	};

	// to be define client
	Application* CreateApplication();
};


