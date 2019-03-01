/* 
        1
      2 3 
    3 4 5
  4 5 6 7
5 6 7 8 9

*/

#include<stdio.h>
main()
{
int i,j;


for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
printf("  ");

for(j=i;j<=2*i-1;j++)
{
 printf("%d ",j);


}
printf("\n");
}
getch();
}

