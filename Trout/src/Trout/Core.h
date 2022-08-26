#pragma once

#ifdef TE_PLATFORM_WINDOWS

	#ifdef TE_BUILD_DLL
		#define TROUT_API __declspec(dllexport)
	#else
		#define TROUT_API __declspec(dllimport)
	#endif // TE_BUILD_DLL

#endif // TE_PLATFORM_WINDOWS
