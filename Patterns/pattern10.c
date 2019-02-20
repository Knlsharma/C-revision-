/*
1 0 1 0 1 
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0    
1 0 1 0 1 


*/

#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=i ;j<=i+4;j++)
{
printf("%3c",j+64);
}
printf("\n");
}
getch();
}


