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
char i,j;
for(i='A';i<='E';i++)
{
for(j='E';j>='A';j--)
{
printf("%c ",j);
}
printf("\n");
}
getch();
}

