/* 
* * * * *
1 2 3 4
* * *
1 2
*

*/

#include<stdio.h>
main()
{
int i,j;

for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{

i%2!=0 ? printf("%d ",j) : printf("* ");

// printf("%c ",x++);


}
printf("\n");
}
getch();
}

