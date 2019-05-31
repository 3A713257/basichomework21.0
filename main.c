// basic homework 21 (3A713257)
#include<stdio.h>
#include<stdlib.h>

void calc(int,int,int *);
int main(void) 
{
	struct data
	{
		char Number[10];
		char Name[20];
		int Hour;
		int Work;
		int Income;
	}Servitor;
	printf("serial number:");
	gets(Servitor.Number);
	printf("name:");
	gets(Servitor.Name);
	printf("hourly hour:");
	scanf("%d",&Servitor.Hour);
	printf("working hours:");
	scanf("%d",&Servitor.Work);
	printf("\n_________________________________________________________");
	printf("\n");
	printf("\n");
	calc(Servitor.Work,Servitor.Hour,&Servitor.Income);
	printf("serial number:%s\n",Servitor.Number);
	printf("name:%s\n",Servitor.Name);
	printf("hourly hour:%d\n",Servitor.Hour);
	printf("working hours:%d\n",Servitor.Work);
	printf("monthly income:%d\n",Servitor.Income);
	system("pause");
	return 0;
}

void calc(int a,int b,int *c)
{
	*c = a * b ;
}
