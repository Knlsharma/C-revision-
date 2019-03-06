/* 
        1
      3 2 1   
    5 4 3 2 1  
  7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1 

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

for(j=2*i-1;j>=1;j--)
{
 printf("%d ",j);

}
printf("\n");
k++;
}
getch();
}

