#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// Write function
int write(){
	
//Time
	fflush(stdin);
		system("cls");
	fream1();
	gotoxy(60,7);
	printf("*****Write Function Is Activated*****\n\n\n");
	gotoxy(60,8);
	printf("    -----------------------------\n\n ");
	printf("\t\t\t\t\t\t\t\t\(\\\n");
	printf("\t\t\t\t\t\t\t\t\\'\\\n");
	printf("\t\t\t\t\t\t\t\t \\'\\     __________ \n");
	printf("\t\t\t\t\t\t\t\t / '|   \()_________)\n");
	printf("\t\t\t\t\t\t\t\t \\ '/    \\ ~~~~~~~~ \\\n");
	printf("\t\t\t\t\t\t\t\t   \\       \\ ~~~~~~   \\\n");	
	printf("\t\t\t\t\t\t\t\t   ==).      \\__________\\\n");	
	printf("\t\t\t\t\t\t\t\t \(__)       \()__________)\n");
	printf("\t\t\t\t\t\t\t\t'============================='\n\n");		
	time_t rawtime;
	struct tm*timeinfo;
	time(&rawtime);
	timeinfo=localtime (&rawtime);
		gotoxy(30,20);
	printf("Local Date And Time: %s\n",asctime(timeinfo));
	fflush(stdin); //clear the buffered data
	
//Output
	FILE *output;
	char diary[12]; //diary is diary name 
	char (*text)[500];

		gotoxy(30,22);
	printf("Today\'s Date [dd-mm-yyyy]: ");
	gets(diary);
	output=fopen(diary,"a");	
	fflush(stdin);
	gotoxy(10,24);
	printf("Today\'s Content :- \n");

	
	
   // ***** input note in file ***** 	
     	
    int n=26, i = 0,j;
    char arr[100][500];
    
    text = arr;

    char stop[] = {"stop"};

    for (i = 0; i < 100; i++)
    {   fflush(stdin);
        gotoxy(10,n);
        scanf("%[^\n]", arr[i]);

        int count = 0;
        for ( j = 0; j < 4; j++)
        {
            if (stop[j] == arr[i][j])
            {count++;}
        }

        if (count == 4)
        { break;}
        n++;
    }
     	
	//printf("\nWritten Content : %s\n",text);
	fprintf(output,"%sContent :\n",asctime(timeinfo));
	for (j = 0; j <i ; j++)
    {	
	fprintf(output," %s\n",(*(text + j)+0));}
	fprintf(output,"\n");
	fclose(output);
	system("pause");
	
//Back to Main Menu
	printf("\n\t\t\t\tWritting Saved, Returning To The Main Menu\n\n");
	system("pause");
	menu();
	return 0;}
