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
if(i==1 || j==1 || i==5 || j==5 || i==j ||i+j==4+1) 
printf("* ");
else
printf("  ");
}
printf("\n");
}
getch();
}

