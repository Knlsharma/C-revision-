/* 

1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1  


*/

#include<stdio.h>
main()
{
int num;

for(int i=1; i<=5;i++)
{
for(int j=5;j>=i;j++)
{

printf("%d ",j);
}
printf("\n");
}
getch();
}

