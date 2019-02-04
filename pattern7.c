/*

5 5 5 5 5
4 4 4 4 4
3 3 3 3 3  
2 2 2 2 2 
1 1 1 1 1

*/

#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=5;j>=1;j--)
{
printf("%d ",i);
}
printf("\n");
}
getch();
}


