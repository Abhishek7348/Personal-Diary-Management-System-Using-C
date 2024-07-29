#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Exit Function
int exit1(){
	fflush(stdin);
    system("cls");
	fream1();
	gotoxy(60,7);
	printf("**********Exit Function Is Activated**********\n\n\n");
	printf("\t\t\t\t\t\t\t\t              ________\n");
	printf("\t\t\t\t\t\t\t\t             / ______ \\\n");
	printf("\t\t\t\t\t\t\t\t             || _  _ ||\n");
	printf("\t\t\t\t\t\t\t\t             ||| || |||\n");
	printf("\t\t\t\t\t\t\t\t             |||_||_|||\n");
	printf("\t\t\t\t\t\t\t\t             || _  _o||\n");
	printf("\t\t\t\t\t\t\t\t             ||| || |||\n");
	printf("\t\t\t\t\t\t\t\t             |||_||_|||      ^~^  ,\n");
	printf("\t\t\t\t\t\t\t\t             ||______||     \('Y') )\n");
	printf("\t\t\t\t\t\t\t\t            /__________\\    /   \\/\n");
	printf("\t\t\t\t\t\t\t\t    ________|__________|__ \(\\|||/) _________\n");
	printf("\t\t\t\t\t\t\t\t           /____________\\\n");
	printf("\t\t\t\t\t\t\t\t           |____________|\n");
	gotoxy(60,22);
	printf("''''''The System Will Be Closing Now''''''\n");
	system("exit");
}
