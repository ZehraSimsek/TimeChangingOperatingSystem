#include<windows.h>
#include<stdlib.h>
//sistemin yilini bir artiracak
int WINAPI WinMain(HINSTANCE hinst , HINSTANCE hprevinst , LPSTR cmd_line , int show_cmd)
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	st.wYear++;
	//geri almak i�in st.wYear--;
	SetSystemTime(&st);
	
	return 0;
}
