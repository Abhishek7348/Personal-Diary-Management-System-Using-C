#include <stdio.h>
#include <stdlib.h>
// #include <Windows.h>
// Hi everyone, I choose to make a personal library because I personally write a diary too, hope you enjoy.
// This project is originally made by Yew Qi Ming (A19EM0478) UTM. 
int menu();
int	password(char *n,char*p);
int write();
int read();
int exit1();
int fream1();
void gotoxy(int x,int y);

int main() {
	fream1();
	int c;// c=condition
	char n[20],p[20];// n=name, p=password
	printf("\n\n        \t\t\t\t	**********   Welcome To The Personal Diary   **********\n\n");
	printf("\t\t\t\t\t\t\t\t        _ _\n");
	printf("\t\t\t\t\t\t\t\t   .-. | | |\n");
	printf("\t\t\t\t\t\t\t\t   |M|_|A|N\n");
	printf("\t\t\t\t\t\t\t\t   |A|a|.|.|<\\\n");
	printf("\t\t\t\t\t\t\t\t   |T|r| | | \\\\\n");
	printf("\t\t\t\t\t\t\t\t   |H|t|M|Z|  \\\\\n");
	printf("\t\t\t\t\t\t\t\t   | |!| | |   \\>\n");
	printf("\t\t\t\t\t\t\t\t  \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
	gotoxy(60,17);
	printf("  Lets Verify Your Identity\n\n\n");
	
	system("pause");
	gotoxy(22,22);
	printf("Username : ");
	scanf("%s",n);
	gotoxy(22,24);
	printf("Password : ");
	scanf("%s",p);
	c=password(n,p);
	gotoxy(60,27);
	if (c==1){printf(" \"Verification Successful\"\n");
	system("pause");menu();}
	else { gotoxy(56,27);
	printf(" \"Verification Error, Please Try Again\"\n");
	system("pause");system("cls");main();
	}
}

