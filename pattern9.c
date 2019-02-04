/*

5 4 3 2 1 
6 5 4 3 2 
7 6 5 4 3    
8 7 6 5 4  
9 8 7 6 5

*/

#include<stdio.h>
main()
{
int i,j;
for(i=5;i>=1;i--)
{
for(j=5;j>=i-4 && j>0;j--)
{
printf("%d ",j);
}
printf("\n");
}
getch();
}


