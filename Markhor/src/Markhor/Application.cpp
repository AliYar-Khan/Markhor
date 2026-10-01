#include <Markhor/Application.h>

#include <iostream>

namespace Markhor {

	Application::Application()
	{
    		std::cout << "Markhor Engine initialized\n";
	}

	void Application::Run()
	{
    		std::cout << "Markhor Engine running\n";
	}

}
