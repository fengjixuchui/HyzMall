#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include "initializer\client_initializer.h"
#include <boost/asio.hpp>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow) {
	//	AllocConsole();
	//	freopen("CONOUT$", "w+", stdout);

	initializer::client_initializer::get()->run();


    return 0;
}

