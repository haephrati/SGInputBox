/*

Adding a InputBox() to any c++ program - an article for Code Project
by Michael Haephrati, Secured Globe, Inc. www.securedglobe.net
haephrati@gmail.com

June 2019
©2019 Michael Haephrati and Secured Globe, Inc. 1501 Broadway Ave. STE 1200, New York 10036, NY
*/

#include "pch.h"
#include <iostream>
#include "SG_InputBoxLib.h"
int main()
{
    wprintf(L"Testing the InputBox static lib\n"); 
	LPWSTR result = SG_InputBox::GetString(L"Code Project Demo - by Michael Haephrati", L"What is your name",L"My name is Michael");
	wprintf(L"User entered '%s'\n", result);
	
}

// This is a standard Console application
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
