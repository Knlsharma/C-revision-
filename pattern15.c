/*
* * * * *
A B C D E
* * * * * 
A B C D E     
* * * * *  
*/

#include<stdio.h>
main()
{
char j;
int i;
for(int i=1;i<=5;i++)
{
for(char j='A';j<='E';j++)
{
if(i%2!=0)
printf("* ");
else
printf("%c ",j);

}
printf("\n");
}
getch();
}

