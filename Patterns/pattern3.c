/*
1  0  1  0  1
1  0  1  0  1
1  0  1  0  1
1  0  1  0  1
1  0  1  0  1
*/
#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
printf("%3d",j%2);
}
printf("\n");
}
getch();
}


