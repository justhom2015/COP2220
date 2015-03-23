# COP2220
Assignments from my class

#include<stdio.h>
#include<stdlib.h>
#include <string.h>  
#define ARRAYSIZE 5

typedef struct 
{
char name [100];
int id_num;
float balance; 
int  yearjoined ;
} member;


void CreateTestData(member bankmember[], int size )

{
strcpy_s(bankmember[0].name, "Jett Thomas");
bankmember[0].id_num = 1001;
bankmember[0].balance = 343,450.00;
bankmember[0].yearjoined= 2007; 


strcpy_s(bankmember[1].name, "Sarah Thomas");
bankmember[1].id_num = 1002;
bankmember[1].balance = 6650.00;
bankmember[1].yearjoined= 1995;



strcpy_s(bankmember[2].name, "Valencia Jones");
bankmember[2].id_num = 1003;
bankmember[2].balance = 30.00;
bankmember[2].yearjoined= 1977 ;

strcpy_s(bankmember[3].name, "Diomond Lucious");
bankmember[3].id_num = 1004;
bankmember[3].balance = 50.00;
bankmember[3].yearjoined= 2000 ;


strcpy_s(bankmember[4].name, "Maximus Aralius");
bankmember[4].id_num = 1005;
bankmember[4].balance = 100,100.00;
bankmember[4].yearjoined= 2012 ;


strcpy_s(bankmember[5].name, "Eddie Pheonix");
bankmember[5].id_num = 1006;
bankmember[5].balance = 25.00;
bankmember[5].yearjoined= 1998 ;
}

int FindByID(myStruct mArray[], int size, int id);


int FindAndPrintByYear(myStruct mArray[], int size, int yearJoined);


	int i;
for (i=0; i <size; i++)
{
printf("Name\tID\tBalance\tYear Joined\n");
printf("*****************************************\n");
printf("%s\t%i\t$%.2lf\t%i\n",
bankmember[i].name,
bankmember[i].id_num,
bankmember[i].balance,
bankmember[i].yearjoined);
}
}
void main()
{

int choice,i;


	printf("Select a number that corresponds to the menu :");
	scanf_s("%i", &choice);

	printf("************************************\n");// menu allows user to selectivly display desired answer
	printf("1->Search by ID\n");
	printf("2->Search by year join\n");
	printf("3->EXIT \n");
	printf("************************************\n\n");
	
	while (choice!=3)
		printf("Select a number that corresponds to the menu :");
	scanf_s("%i", &choice);

	printf("************************************\n");
	printf("1->Search by ID\n");
	printf("2->Search by year join\n");
	printf("3->EXIT \n");
	printf("************************************\n\n")
	switch(choice)
	{
	case 1:

		printf("Please enter ID:\n");
		scanf_s("%i",&choice);
{
if(choice==1001)
{
	 PrintData();
}
	
if(choice==1002)
{

	PrintData(bankmember [1], ARRAYSIZE);
}
		if(choice==1003)
		{
			PrintData(bankmember [2], ARRAYSIZE);;
		}

if(choice==1004)
	{
		PrintData(bankmember [3], ARRAYSIZE);
}
if(choice==1005)
	{
PrintData(bankmember [4], ARRAYSIZE);
}
	if(choice==1006)
	{
		PrintData(bankmember [5], ARRAYSIZE);
	}
			break;
	case 2:

		printf("Please enter Year:\n"); 
		break; 

		if(choice==2007)
		{
	PrintData(bankmember [0], ARRAYSIZE);
		}
	
if(choice==1995)
{
PrintData(bankmember [1], ARRAYSIZE);
}
	if(choice==1977)
	{
		PrintData(bankmember [2], ARRAYSIZE);
	}


if(choice==2000)
	{
		PrintData(bankmember [3], ARRAYSIZE);
}
if(choice==2012)
{
	PrintData(bankmember [4], ARRAYSIZE);
}
	if(choice==1998)
{
	PrintData(bankmember [5], ARRAYSIZE);
	}
	case 3:
		printf("Good Bye!n\n");
		break;
}
	system("pause");


}

