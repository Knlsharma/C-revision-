/* 

* * * * * *
*         * 
*         *
*         *
* * * * * *
With cross diagonal
as per user input

*/

#include<stdio.h>
main()
{
int num;
printf("Enter the number for dimension:/n");
scanf("%d",&num);
for(int i=1; i<=num; i++)
{
for(int j=1;j<=num;j++)
{
 // if(i==1 || j==1 || i==5 || j==5 || i==j || j==4+i || j==i+2 || i==j+2 || i==4+j) particular for 5
if( i==1 || j==1 || i==num || j==num || i==j || i+j==num+1)
printf("* ");
else
printf("  ");
}
printf("\n");
}
getch();

}

