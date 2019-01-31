#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	int num,user,ch=15,i,j;
	srand(time(NULL));
	num=rand()%20000+1;
	while(ch>0){
		system("pause");		system("cls");
		printf("Guess a no between 1 to 20000  \n Chance left %d : ",ch);
		scanf("%d",&user);
		if(num==user)
		{
			printf("you won....... \n");
			printf("Chances left %d \n",ch--);
			break;
		}
		else
		ch--;
		
		if(ch==0)
		printf("Lost no is %d\t",num);
		else if(num>user)
		printf("Number is greater\n");
		else
		printf("Number is smaller\n");
	}
	getch();
}