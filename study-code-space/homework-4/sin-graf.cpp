#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;
void SIN(HDC dc)
{
	
	double x,y;
	double freq = 1;
	double amp = 1;
	for (x = 0; x < 60; x+=0.001)
	{
		y = sin(x*5);
		SetPixel(dc, (160*x)/freq, y*amp*70 + 325, RGB(0,255,0));
	}
}
LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
	if(message == WM_DESTROY)PostQuitMessage(0);
	return DefWindowProcA(hwnd, message, wparam, lparam);
}
int main()
{
    WNDCLASSA w;
    memset(&w, 0, sizeof(WNDCLASSA));
    w.lpszClassName = "win";
    w.lpfnWndProc = WndProc;
    RegisterClassA(&w);
    HWND hwnd;
    hwnd = CreateWindow("win", "sin", WS_OVERLAPPEDWINDOW, 50, 50, 1200, 650, NULL, NULL, NULL, NULL);
    HDC dc = GetDC(hwnd);
    ShowWindow(hwnd, SW_SHOWNORMAL);
    SIN(dc);
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))DispatchMessage(&msg);
    return 0;
}
