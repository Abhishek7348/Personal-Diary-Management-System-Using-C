#include <stdio.h>
#include <Windows.h>

void gotoxy(int x,int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!SetConsoleCursorPosition(hConsole, coord))
    {
    }
}
int main(){
	gotoxy(99,9);
	printf("ahjkhksfl");
	return 0;
}
