/*
E E E E E
D D D D D
C C C C C 
B B B B B     
A A A A A  
*/

#include<stdio.h>
main()
{
char i,j,x='A';
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
printf("%c ",x++);
}
printf("\n");
}
getch();
}

