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
	int n=0,i=0;
	struct students students[10];
	if(ch=='A'||ch=='a')
	{
		printf("請輸入學生人數 (5~10):");
        scanf("%d", &n);
		while(n<5||n>10)
		{
		printf("請輸入學生人數 (5~10):");
        scanf("%d", &n);
		}
            for (i=0;i<n;i++) {
                printf("\n第%d位學生資料:\n",i+1);
                printf("姓名:");
                scanf("%s",&students[i].name);
                printf("請輸入學號9位數:");
                scanf("%d", &students[i].id);
                if (students[i].id<100000000||students[i].id>999999999) {
                    printf("學號錯誤 請重新輸入\n");
                    i--; // 回到前一個學生
                    continue;
                }

                printf("數學成績:");
                scanf("%d", &students[i].math);
                if (students[i].math<0||students[i].math>100) {
                    printf("成績輸入錯誤 請重新輸入\n");
                    i--;
                    continue;
                }

                printf("物理成績:");
                scanf("%d", &students[i].physics);
                if (students[i].physics<0||students[i].physics>100) {
                    printf("成績輸入錯誤 請重新輸入\n");
                    i--;
                    continue;
                }

                printf("英文成績:");
                scanf("%d", &students[i].english);
                if (students[i].english < 0 || students[i].english > 100) {
                    printf("成績輸入錯誤 請重新輸入\n");
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
