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
    while(count<10)//�y��p��10�� 
    {
    	r=rand()%ROWS;//r���H����/9 
    	c=rand()%COLS;//c���H����/9 
    	if (seats[r][c]!='*')
    	{
    		seats[r][c]='*';//��J*
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
	
	//1.�ӤH����e��  ��������òM���e�� 
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
	getch();//��������ϥ� 
	system("CLS");//�M���e�� 
	//��J�K�X 
	int password,j=0;
	char ch;
	printf("�п�J4��K�X\n");
	while(j!=3)
	{
		scanf("%d",&password);
		if(password==2024)
		{
			printf("�K�X���T!!!");
			break;
		}
		else
		{
			printf("�K�X���~!!!\n");
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
	seats_set();//���s�y��� 
	printf("--------------------------\n");
	printf("| a. Availble seats      |\n");
	printf("| b. Arrange for you   	 |\n");
	printf("| c. Choose by youself	 |\n");
	printf("| d. Exit		 |\n");
	printf("--------------------------\n");
	ch=getche();//�����ϥΪ̫���æ^��
	printf("\n");
	if(ch=='A'||ch=='a')
	{
		system("CLS");
		printf("��e�y���\n");
		show_seats();

	}

	getch();
	return 0;
}
//�o���ƲߤF�H�e���k���g�k�A���ٶ��K�ƲߤFgoto���g�k�A���M��ӵ{�����n������F 
