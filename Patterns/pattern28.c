/*
*
1 2 
* * *  
1 2 3 4  
* * * * *      

*/

#include<stdio.h>
main()
{
int i,j,x=1;
for(i=1; i<=5; i++)
{
for(j=1;j<=i;j++)
{
if(i%2==0)
printf("%d",j);
else
printf("*");
}
printf("\n");
}
getch();
}

