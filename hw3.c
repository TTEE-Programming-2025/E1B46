#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



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
	int password,i=0,j,k,math;
	char ch,chwork;
	printf("�п�J4��K�X\n");
	while(i!=3)
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
	//2.�M���ù��A�X�{�D��� 
	printf("--------------------------\n");
	printf("| a. Availble seats      |\n");
	printf("| b. Arrange for you   	 |\n");
	printf("| c. Choose by youself		 |\n");
	printf("| d. Exit		 |\n");
	printf("--------------------------\n");
	
	getch();
	return 0;
}
//�o���ƲߤF�H�e���k���g�k�A���ٶ��K�ƲߤFgoto���g�k�A���M��ӵ{�����n������F 
