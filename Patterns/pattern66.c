/* 
        E
      D D 
    C C C
  D D D D
A A A A A

*/

#include<stdio.h>
main()
{
int i,j;
int k=5;

for(i=1;i<=5;i++)
{
for(j=5-i;j>=1;j--)
printf("  ");

for(j=2*i-1;j>=i;j--)
{
 printf("%c ",k+64);

}
printf("\n");
k--;
}
getch();
}

