/*
* * * * *
2 2 2 2 2
* * * * *
2 2 2 2 2
* * * * *

*/

#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i%2==0)
printf("%d ",i);
else
printf("* ");
}
printf("\n");
}
getch();
}


