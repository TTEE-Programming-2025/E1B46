#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int password;
	char ch;
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
	//2.��J�K�X
	printf("�п�J4��K�X\n");
	scanf("%d",&password);
	if(password==2024)
	{
		printf("�K�X���T!!!");
	}
	else
	{
		printf("�K�X���~!!!\n");
		system("pause");
		return 0;
	}
	getch();
	system("CLS");
	//3.�L�X�D���
	printf("-----------------------------\n");
	printf("| 'A'...'Z'  :Uppercase     |\n");
	printf("| 'a'...'z'  :Lowercase     |\n");
	printf("| '0'...'9'  :Digit         |\n");
	printf("| Otherwise  :kimi no na wa |\n");
	printf("-----------------------------\n");
	//4.�����ϥΪ̫���ÿ�X
	printf("�п�J1�Ӧr��\n");
	ch=getche();//�����ϥΪ̫���æ^��
	printf("\n");
	if(ch>='A'&&ch<='Z')//�ϥγ�޸�����ascii code 
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
		printf("E1B46���F�N");
	}
	getch();
	return 0;
}
//���M�H�e�@����ť�Lgithub�o�ӪF��A���O�@���S���h�ΡA�}�l�Τ���o�{���M�ܳ·СA���ڷPı�ڲ{�b�����b�� 
