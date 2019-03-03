/* 
        A
      B A 
    C B A
  D C B A
E D C B A

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
 printf("%c ",j+64);


}
printf("\n");
}
getch();
}

