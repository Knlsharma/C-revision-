/*
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8

*/

#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=i;j<=i+4;j++)
{
printf("%2d",j);
}
printf("\n");
}
getch();
}


