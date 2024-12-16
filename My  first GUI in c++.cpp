// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <Windows.h>
#include <WinUser.h>

//c++ application that creates a window. 

//using namespace std;

int main(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
	

	//this is to check if i have a working API using messagebox that displays a message on the screen with the text i pass into it
	MessageBox(NULL, L"Hello, this is Bubbles.",L"Welcome to My first GUI", MB_OK);
	/* Explanation of the arguments inside message box
	1. First argument is the window handler of the parent window but since the message box has no parent window i will pass null into it
	if there was a parent window, i would put it as the first argument
	2. Second argument is a text in form of lpcstr which is array of characters. i will pass a string there
	3. Third argument is the caption of the message box
	4. Last argument is the type of message box.

	reason for using wide-character string
		 Windows provides two versions of most API functions, including MessageBox:
		  MessageBoxA: ANSI version, which works with narrow-character strings (const char*).
		  MessageBoxW: Unicode version, which works with wide-character strings (const wchar_t*).
		  The MessageBox macro automatically maps to either MessageBoxA or MessageBoxW depending on the project's character set setting.
		  A wide-character string is prefixed with L
		  To satisfy the LPCWSTR parameter, you must provide wide-character strings
	*/


	system("pause");
	return 0;
}
