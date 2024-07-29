#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
// Read Function
int read(){
	fflush(stdin);
	system("cls");
     fream1();
     gotoxy(60,7);
	printf("*****Read Function Is Activated*****\n");
	  gotoxy(60,8);
	printf("     --------------------------\n\n ");
	printf("\t\t\t\t\t\t\t                 .--.   _\n");
	printf("\t\t\t\t\t\t\t             .---|__| .\(\(\\-.\n");
	printf("\t\t\t\t\t\t\t          .--|===|--|/    , \\\n");
	printf("\t\t\t\t\t\t\t          |  |===|  |\\      y\n");			
	printf("\t\t\t\t\t\t\t          |  |   |  | `.__,'\n");
	printf("\t\t\t\t\t\t\t          |  |   |  | /  \\\\\\\n");
	printf("\t\t\t\t\t\t\t          |  |   |  |/|  | \\`----.\n");
	printf("\t\t\t\t\t\t\t          |  |   |  ||\\  \\  |___.'_\n");
	printf("\t\t\t\t\t\t\t         _|  |   |__||,\\  \\-+-._.' )_\n");				
	printf("\t\t\t\t\t\t\t        / |  |===|--|\\  \\  \\      /  \\\n");
	printf("\t\t\t\t\t\t\t       /  `--^---'--' `--`-'---^-'    \\\n");	
	printf("\t\t\t\t\t\t\t      '================================`\n\n");		

	
	//Input
	FILE *input;
	char diary[12]; //diary is diary name 
	char text[500];
	char text2[500];
	gotoxy(22,22);
	printf("Diary's Date [dd-mm-yyyy]: ");
	gets(diary);
	
	input=fopen(diary,"r");
	fflush(stdin);
	
	//Loop For Reading different rows	
	 int n=26;
	while(fgets(text,500,input)!=NULL){
		
		sscanf(text,"%[^\n]",text2);
	    gotoxy(10,n) ;
		printf("%s\n",text);	
		n++;
	}
	fclose(input);
	system("pause");
	int i;
	printf("\t\t\t\t\tContinue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		read();
		break;}
	
		case 2 :{
		printf("\t\t\t\t\tOkay, Returning To The Main Menu\n");
		system("pause");
		menu();
		break;
		}
		
		default :{
		printf("\t\t\t\t\tError Selection, Lets Go To The Main Menu\n");
		system("pause");
		menu();
		break;
		}
	}
		
}
