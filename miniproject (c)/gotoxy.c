#include <stdio.h>
#include <Windows.h>

void gotoxy(int x ,int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hConsole, coord);
    
}
