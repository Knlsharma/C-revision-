/* 

* * * * * *
*         * 
*         *
*         *
* * * * * *

*/

#include<stdio.h>
main()
{
int i,j;
for(i=1; i<=5; i++)
{
for(j=1;j<=5;j++)
{
if(i==1 || j==1 || i==5 || j==5 || i==j || j==4+i || j==i+2 || i==j+2 || i==4+j) 
printf("* ");
else
printf("  ");
}
printf("\n");
}
getch();
}

