#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define ROWS 9
#define COLS 9
char seats[ROWS][COLS];
 
void seats_set()//seats setting
{
	int i,j,r,c,count,rand_seat=0;
	for(i=0;i<ROWS;i++)
	{ 
        for(j=0;j<COLS;j++)
        {
            seats[i][j] = '-';
        }
    }
    while(count<10)//座位小於10時 
    {
    	r=rand()%ROWS;//r為隨機數/9 
    	c=rand()%COLS;//c為隨機數/9 
    	if (seats[r][c]!='*')
    	{
    		seats[r][c]='*';//填入*
			count++; 
		}
	}
}

void show_seats()//show seats
{
	int i,j;
	printf("  ");
    for (i=0;i<COLS;i++)
    {
    	printf("%2d",i+ 1);
	}
    printf("\n");
    
	for (i=0;i< ROWS;++i)
	{
		printf("%2d",i+1);
        for (j=0;j<COLS;++j)
        {
            printf("%2c",seats[i][j]);
        }
        printf("\n");
	}
	
}
 
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
	seats_set();//重製座位表 
	printf("--------------------------\n");
	printf("| a. Availble seats      |\n");
	printf("| b. Arrange for you   	 |\n");
	printf("| c. Choose by youself	 |\n");
	printf("| d. Exit		 |\n");
	printf("--------------------------\n");
	ch=getche();//偵測使用者按鍵並回應
	printf("\n");
	if(ch=='A'||ch=='a')
	{
		system("CLS");
		printf("當前座位表\n");
		show_seats();

	}

	getch();
	return 0;
}
//這次複習了以前乘法表的寫法，我還順便複習了goto的寫法，不然整個程式都要更複雜了 
