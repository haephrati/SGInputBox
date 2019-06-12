/*

Adding a InputBox() to any c++ program - an article for Code Project
by Michael Haephrati, Secured Globe, Inc. www.securedglobe.net
haephrati@gmail.com

June 2019
©2019 Michael Haephrati and Secured Globe, Inc. 1501 Broadway Ave. STE 1200, New York 10036, NY
*/

#pragma once
#define ASPECT_RATIO_X	2
#define ASPECT_RATIO_Y	2
#define TOP_EDGE		10 * ASPECT_RATIO_Y
#define INPUTBOX_WIDTH	500 * ASPECT_RATIO_X
#define INPUTBOX_HEIGHT 150 * ASPECT_RATIO_Y
#define TEXTEDIT_HEIGHT	30 * ASPECT_RATIO_Y
#define BUTTON_HEIGHT	25 * ASPECT_RATIO_Y
#define BUTTON_WIDTH	120 * ASPECT_RATIO_X
#define FONT_HEIGHT		20 * ASPECT_RATIO_Y

#define CLASSNAME					L"SG_Inputbox"
#define PUSH_BUTTON					L"Button"
#define FONT_NAME					_T("Times")
#define TEXTEDIT_CLASS				L"edit"
#define SetFontToControl(n)			SendMessage((n), WM_SETFONT, (WPARAM)m_hFont, 0);


HFONT m_hFont = NULL;
HWND  m_hWndInputBox = NULL;
HWND  m_hWndParent = NULL;
HWND  m_hWndEdit = NULL;
HWND  m_hWndOK = NULL;
HWND  m_hWndCancel = NULL;
HWND  m_hWndPrompt = NULL;
wchar_t m_String[320];
static HBRUSH hbrBkgnd = NULL;


class SG_InputBox
{

	static HFONT m_hFont;
	static HWND  m_hWndInputBox;
	static HWND  m_hWndParent;
	static HWND  m_hWndEdit;
	static HWND  m_hWndOK;
	static HWND  m_hWndCancel;
	static HWND  m_hWndPrompt;
	static wchar_t m_String[320];
	static HBRUSH hbrBkgnd;


	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

public:
	static LPWSTR GetString(LPCTSTR szCaption, LPCTSTR szPrompt, LPCTSTR szDefaultText = L"");

};

