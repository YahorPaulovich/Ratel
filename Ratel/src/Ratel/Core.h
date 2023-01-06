#pragma once

#ifdef RATEL_PLATFORM_WINDOWS
	#ifdef RATEL_BUILD_DLL
		#define RATEL_API __declspec(dllexport)
	#else
		#define RATEL_API __declspec(dllimport)
	#endif // RATEL_BUILD_DLL
#else
	#error Ratel Engine only supports Windows!
#endif // RATEL_PLATFORM_WINDOWS

