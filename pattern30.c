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
int i,j;
for(i=5; i>=1; i--)
{
for(j=1;j<=5;j++)
{
printf("%c ",i+64);
}
printf("\n");
}
getch();
}

