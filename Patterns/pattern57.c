/* 
        1
      2 1 
    3 2 1
  4 3 2 1
5 4 3 2 1

*/

#include<stdio.h>
main()
{
int i,j;

for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
printf("  ");

for(j=i;j>=1;j--)
{
 printf("%d ",j);


}
printf("\n");
}
getch();
}

