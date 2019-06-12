/*

Adding a InputBox() to any c++ program - an article for Code Project
by Michael Haephrati, Secured Globe, Inc. www.securedglobe.net
haephrati@gmail.com

June 2019
©2019 Michael Haephrati and Secured Globe, Inc. 1501 Broadway Ave. STE 1200, New York 10036, NY
*/

#pragma once
#include <Windows.h>

class SG_InputBox
{
public:
	static LPWSTR GetString(LPCTSTR szCaption, LPCTSTR szPrompt, LPCTSTR szDefaultText = L"");
};
