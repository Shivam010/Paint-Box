#include <windows.h>
#include <iostream>
#include <time.h>
#include <graphics.h>
#include <vector>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	DWORD sw=GetSystemMetrics(SM_CXSCREEN);
	DWORD sw1=GetSystemMetrics(SM_CYSCREEN);
	initwindow(1366,768,"",-3,-3,0,1);

    //rectangle(100,200,300,150);
	POINT pos;
	while(1)
    {
        if(GetAsyncKeyState(VK_LBUTTON)){
        GetCursorPos(&pos);
        long x=pos.x;
        long y=pos.y;
        setcolor(11);
        setfillstyle(SOLID_FILL,11);
        //bar(x-2,y-2,x+2,y+2);
        bar(x,y,x+10,y+10);
        }
	}
	getch();
	closegraph();
	return 0;
}

