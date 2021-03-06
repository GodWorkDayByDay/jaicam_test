#ifndef VERSION_H
#define VERSION_H

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

//#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")

#define PI 3.141592657987

#define SOFTWARE_NAME "JAICameraTest"

#define VER_MAJOR 0
#define VER_MINOR 1
#define VER_BUILD 1
#define BETA_VERSION 1

#define GREY_DATA 0
#define RED_DATA 1
#define GREEN_DATA 2
#define BLUE_DATA 3
#define NUM_COLOR_PLANES 4

// The default size of the MIL display buffer, MIL behavior changes
// with this setting so be careful. 
#define DEFAULT_MIL_DISPLAY_BUFFER_SIZE 2048

#define EXECUTABLE_NAME "JAICameraTest"

#endif // ifndef VERSION_H
