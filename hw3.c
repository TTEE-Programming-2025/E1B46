#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



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
	int password,i=0,j,k,math;
	char ch,chwork;
	printf("請輸入4位密碼\n");
	while(i!=3)
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
			i++;
		}
	}
	if(i==3)
	{
		system("pause");
		return 0;
	}
	getch();
	system("CLS");
	//2.清除螢幕，出現主選單 
	printf("--------------------------\n");
	printf("| a. Availble seats      |\n");
	printf("| b. Arrange for you   	 |\n");
	printf("| c. Choose by youself		 |\n");
	printf("| d. Exit		 |\n");
	printf("--------------------------\n");
	
	getch();
	return 0;
}
//這次複習了以前乘法表的寫法，我還順便複習了goto的寫法，不然整個程式都要更複雜了 
