#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int password,i=0,j,k,math;
	char ch,chwork;
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
main:
	printf("--------------------------\n");
	printf("| a. �e�X�����T����      |\n");
	printf("| b. ��ܭ���k   	 |\n");
	printf("| c. ����		 |\n");
	printf("--------------------------\n");
	ch=getche();//�����ϥΪ̫���æ^��
	printf("\n");
	if(ch=='A'||ch=='a')//3.�����T���� 
	{
		system("CLS");
		printf("�п�Ja~n���r��\n");
		fflush(stdin);
		chwork=getche();
		while(chwork<'a'||chwork>'n')
		{
			printf("\n�п�Ja~n���r��\n");
			chwork=getche();
		}
		system("CLS");
		int rows=chwork-'a'+1;//�ŧirows�ܼ�=chwork�� ascii code -'a'+1(�M�w�n�L�X��(�))  
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
	else if(ch=='B'||ch=='b')//4.���k�� 
	{
		system("CLS");
		printf("�п�J1~9�����n\n");
		scanf("%d",&math);
		while(math<1||math>9)
		{
			printf("�п�J1~9�����n\n");
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
	else if(ch=='C'||ch=='c')//5.�n���n�~�� 
	{
		printf("'Coutinue? (y/n)'\n");
		worng:
		ch=getche();
		if(ch=='Y'||ch=='y')
		{
			system("CLS");
			goto main;//�^��W��main:�B 
		}
		else if(ch=='N'||ch=='n')
		{
			return 0;
		}
		else
		{
			printf("�п�J(y/n)\n");
			goto worng;	
		}
	}

	getch();
	return 0;
}
//�o���ƲߤF�H�e���k���g�k�A���ٶ��K�ƲߤFgoto���g�k�A���M��ӵ{�����n������F 
