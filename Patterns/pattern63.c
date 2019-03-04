/* 
        1
      2 2   
    3 3 3
  4 4 4 4
5 5 5 5 5

*/

#include<stdio.h>
main()
{
int i,j;
int k=1;

for(i=1;i<=5;i++)
{
for(j=5-i;j>=1;j--)
printf("  ");

for(j=2*i-1;j>=i;j--)
{
 printf("%d ",k);

}
printf("\n");
k++;
}
getch();
}

