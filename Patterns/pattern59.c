/* 
        1
      3 2 
    5 4 3
  7 6 5 4
9 8 7 6 5

*/

#include<stdio.h>
main()
{
int i,j;


for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
printf("  ");

for(j=2*i-1;j>=i;j--)
{
 printf("%d ",j);


}
printf("\n");
}
getch();
}

