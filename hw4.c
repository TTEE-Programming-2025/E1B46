#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct students{
	char name[50];
    int id;
	int math;
    int physics;
    int english;
};

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
	menu:
	printf("-----------------------------------\n");
	printf("| a. Enter student grades         |\n");
	printf("| b. Display student grades       |\n");
	printf("| c. Search for student grades	  |\n");
	printf("| d. Grade ranking	 	  |\n");
	printf("| e. Exit	           	  |\n");
	printf("-----------------------------------\n");
	ch=getche();//�����ϥΪ̫���æ^��
	printf("\n");
	int n=0,i=0;
	struct students students[10];
	if(ch=='A'||ch=='a')
	{
		printf("�п�J�ǥͤH�� (5~10):");
        scanf("%d", &n);
		while(n<5||n>10)
		{
		printf("�п�J�ǥͤH�� (5~10):");
        scanf("%d", &n);
		}
            for (i=0;i<n;i++) {
                printf("\n��%d��ǥ͸��:\n",i+1);
                printf("�m�W:");
                scanf("%s",&students[i].name);
                printf("�п�J�Ǹ�9���:");
                scanf("%d", &students[i].id);
                if (students[i].id<100000000||students[i].id>999999999) {
                    printf("�Ǹ����~ �Э��s��J\n");
                    i--; // �^��e�@�Ӿǥ�
                    continue;
                }

                printf("�ƾǦ��Z:");
                scanf("%d", &students[i].math);
                if (students[i].math<0||students[i].math>100) {
                    printf("���Z��J���~ �Э��s��J\n");
                    i--;
                    continue;
                }

                printf("���z���Z:");
                scanf("%d", &students[i].physics);
                if (students[i].physics<0||students[i].physics>100) {
                    printf("���Z��J���~ �Э��s��J\n");
                    i--;
                    continue;
                }

                printf("�^�妨�Z:");
                scanf("%d", &students[i].english);
                if (students[i].english < 0 || students[i].english > 100) {
                    printf("���Z��J���~ �Э��s��J\n");
                    i--;
                    continue;
                }
            }
			system("CLS");
			goto menu;
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
			goto menu;//�^��W��main:�B 
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
