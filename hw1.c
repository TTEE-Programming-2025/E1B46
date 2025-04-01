#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int password;
	char ch;
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
	//2.輸入密碼
	printf("請輸入4位密碼\n");
	scanf("%d",&password);
	if(password==2024)
	{
		printf("密碼正確!!!");
	}
	else
	{
		printf("密碼錯誤!!!\n");
		system("pause");
		return 0;
	}
	getch();
	system("CLS");
	//3.印出主選單
	printf("-----------------------------\n");
	printf("| 'A'...'Z'  :Uppercase     |\n");
	printf("| 'a'...'z'  :Lowercase     |\n");
	printf("| '0'...'9'  :Digit         |\n");
	printf("| Otherwise  :kimi no na wa |\n");
	printf("-----------------------------\n");
	//4.偵測使用者按鍵並輸出
	printf("請輸入1個字元\n");
	ch=getche();//偵測使用者按鍵並回應
	printf("\n");
	if(ch>='A'&&ch<='Z')//使用單引號偵測ascii code 
	{
		printf("Uppercase");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("Lowercase");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("E1B46李政杰");
	}
	getch();
	return 0;
}
//雖然以前一直有聽過github這個東西，但是一直沒有去用，開始用之後發現雖然很麻煩，但我感覺我現在像個駭客 
