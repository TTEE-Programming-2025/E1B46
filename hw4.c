#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
	
	//1.個人風格畫面  偵測按鍵並清除畫面 
	printf("--------------------------\n");
	printf("--------44--------6666666-\n");
	printf("-------4-4-------66-----66\n");
	printf("------4--4------66-------6\n");
	printf("-----4---4-----66--------6\n");
	printf("----4----4-----66---------\n");
	printf("---4-----4-----66---------\n");
	printf("--4------4-----66---------\n");
	printf("-4-------4-----66---------\n");
	printf("4--------4-----666666666--\n");
	printf("4444444444444--66------66-\n");
	printf("---------4-----66-------66\n");
	printf("---------4-----66--------6\n");
	printf("---------4-----66--------6\n");
	printf("---------4-----66--------6\n");
	printf("---------4-----66--------6\n");
	printf("---------4-----66--------6\n");
	printf("---------4-----66-------66\n");
	printf("---------4------66-----66-\n");
	printf("---------4-------6666666--\n");
	printf("--------------------------\n");
	getch();//偵測按鍵使用 
	system("CLS");//清除畫面 
	//輸入密碼 
	int password,j=0;
	char ch;
	printf("請輸入4位密碼\n");
	while(j!=3)
	{
		scanf("%d",&password);
		if(password==2024)
		{
			printf("密碼正確!!!");
			break;
		}
		else
		{
			printf("密碼錯誤!!!\n");
			j++;
		}
	}
	if(j==3)
	{
		system("pause");
		return 0;
	}
	getch();
	system("CLS");
	//2.show menu
	menu:
	printf("-----------------------------------\n");
	printf("| a. Enter student grades         |\n");
	printf("| b. Display student grades       |\n");
	printf("| c. Search for student grades	  |\n");
	printf("| d. Grade ranking	 	  |\n");
	printf("| e. Exit	           	  |\n");
	printf("-----------------------------------\n");
	ch=getche();//偵測使用者按鍵並回應
	printf("\n");
	if(ch=='A'||ch=='a')
	{

	}
	else if(ch=='B'||ch=='b')
	{

	}
	else if(ch=='C'||ch=='c')
	{

	}
	else if(ch=='D'||ch=='d')
	{

	}
	else if(ch=='E'||ch=='e')
	{
		system("CLS");
		printf("'Coutinue? (y/n)'\n");
		worng:
		ch=getche();
		if(ch=='Y'||ch=='y')
		{
			system("CLS");
			goto menu;//回到上面main:處 
		}
		else if(ch=='N'||ch=='n')
		{
			return 0;
		}
		else
		{
			printf("請輸入(y/n)\n");
			goto worng;	
		}
	}

	getch();
	return 0;
}

