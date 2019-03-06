/* 
        1
      1 2 3   
    1 2 3 4 5 
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

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

for(j=1;j<=2*i-1;j++)
{
 printf("%d ",j);

}
printf("\n");
k++;
}
getch();
}

