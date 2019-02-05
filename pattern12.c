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
for(i=5;i>=1;i--)
{
for(j=i;j>=i-4;j--)
{
printf("%c ",j+64);
}
printf("\n");
}
getch();
}

