#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Menu Function
int menu(){
	
	fflush(stdin);
	system("cls");
	fream1();
	int s; //s=switch
	gotoxy(60,7);
	printf("**********   Welcome To The Main Menu   **********\n\n");
	printf("\t\t\t\t1: Write\n\t\t\t\t2: Read\n\t\t\t\t3: Exit\n\n\t\t\t\tSelect An Option : ");
	scanf("%d",&s);
		switch(s){
			
		case   1:{
			write();
			break;
		}
		
		case   2:{
			read();
			break;
		}
		case   3:{
			exit1();
			break;
		}
		
		default :{
			printf("\t\t\t\t\t\t\tError Selection, Please Try Again\n");
			system("pause");system("cls");
			menu();
			break;
		}
				
		}
	}
	

