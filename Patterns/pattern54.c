/* 
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1

*/

#include<stdio.h>
main()
{
int i,j;

for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
j%2!=0 ? printf("1 ") : printf("0 ");
// printf("%c ",x++);
}
printf("\n");
}
getch();
}

