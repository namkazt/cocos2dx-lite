#include "main.h"

#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <Commdlg.h>
#include <Shlobj.h>
#include <winnls.h>
#include <shobjidl.h>
#include <objbase.h>
#include <objidl.h>
#include <shlguid.h>
#include <shellapi.h>

#include "cocos2d.h"
#include "AppDelegate.h"
#include "ProjectConfig/ProjectConfig.h"

USING_NS_CC;

#define USE_WIN32_CONSOLE 0
int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

	LPWSTR *szArgList = nullptr;
	int argCount = 0;

	szArgList = CommandLineToArgvW(GetCommandLine(), &argCount);
	LocalFree(szArgList);

	ProjectConfig project;
	HWND hwndConsole;

	// load project config from command line args
	vector<string> args;
	for (int i = 0; i < __argc; ++i)
	{
		wstring ws(__wargv[i]);
		string s;
		s.assign(ws.begin(), ws.end());
		args.push_back(s);
	}
	project.parseCommandLine(args);

#if USE_WIN32_CONSOLE <= 0
	project.setShowConsole(false);
#endif

	// create console window
	if (project.isShowConsole())
	{
		AllocConsole();
		hwndConsole = GetConsoleWindow();
		if (hwndConsole != NULL)
		{
			ShowWindow(hwndConsole, SW_SHOW);
			BringWindowToTop(hwndConsole);
			freopen("CONOUT$", "wt", stdout);
			freopen("CONOUT$", "wt", stderr);

			HMENU hmenu = GetSystemMenu(hwndConsole, FALSE);
			if (hmenu != NULL) DeleteMenu(hmenu, SC_CLOSE, MF_BYCOMMAND);
		}
	}
	project.dump();

	// set environments
	CCLOG("the project directory is: %s", project.getProjectDir().c_str());

	// create the application instance
	AppDelegate app;

	int ret = Application::getInstance()->run();

#if USE_WIN32_CONSOLE
	if (!ret)
	{
		system("pause");
	}
	FreeConsole();
#endif

	return ret;


    //// create the application instance
    //AppDelegate app;
    //return Application::getInstance()->run();
}


