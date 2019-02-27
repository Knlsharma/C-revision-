/* 
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1

*/

#include<stdio.h>
main()
{
int i,j;

for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
i%2!=0 ? printf("1 ") : printf("0 ");
// printf("%c ",x++);
}
printf("\n");
}
getch();
}

