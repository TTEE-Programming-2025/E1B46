#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int password,i=0,j,k,math;
	char ch,chwork;
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
main:
	printf("--------------------------\n");
	printf("| a. 畫出直角三角形      |\n");
	printf("| b. 顯示乘表法   	 |\n");
	printf("| c. 結束		 |\n");
	printf("--------------------------\n");
	ch=getche();//偵測使用者按鍵並回應
	printf("\n");
	if(ch=='A'||ch=='a')//3.直角三角形 
	{
		system("CLS");
		printf("請輸入a~n的字元\n");
		fflush(stdin);
		chwork=getche();
		while(chwork<'a'||chwork>'n')
		{
			printf("\n請輸入a~n的字元\n");
			chwork=getche();
		}
		system("CLS");
		int rows=chwork-'a'+1;//宣告rows變數=chwork的 ascii code -'a'+1(決定要印幾行(橫的))  
		for (i=1;i<=rows;i++) //
		{
			for(k=0;k<rows-i;k++)
			{
				printf(" ");
			}
        	for (j=0;j<i;j++) 
			{
            printf("%c", 'a' +j);
            }
        printf("\n");
    	}
	}
	else if(ch=='B'||ch=='b')//4.乘法表 
	{
		system("CLS");
		printf("請輸入1~9的整數n\n");
		scanf("%d",&math);
		while(math<1||math>9)
		{
			printf("請輸入1~9的整數n\n");
			scanf("%d",&math);
		}
		for(i=1;i<=math;i++)
		{
			printf("\n");
			for(j=1;j<=math;j++)
			{
				printf("%dx%d=%-4d",i,j,i*j);
			}
		}
	}
	else if(ch=='C'||ch=='c')//5.要不要繼續 
	{
		printf("'Coutinue? (y/n)'\n");
		worng:
		ch=getche();
		if(ch=='Y'||ch=='y')
		{
			system("CLS");
			goto main;//回到上面main:處 
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
//這次複習了以前乘法表的寫法，我還順便複習了goto的寫法，不然整個程式都要更複雜了 
