// LogOff.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "LogOff.h"

void SignOut :: Launch()
{
	int msgBox;
	msgBox = MessageBox(NULL, L"Log off the session?", L"Sign Out.", MB_YESNO);


	if (msgBox != IDNO)
	{
		ExitWindows(NULL, NULL);
	}	

	if (msgBox = IDNO)
	{
		cout << "You selected NO." << endl;
		LockWorkStation();
	}
}
