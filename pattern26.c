/*
A
B C 
C D E 
D E F G 
E F G H I      

*/

#include<stdio.h>
main()
{
int i, j;
for(i=1; i<=5; i++)
{
for(j=i;j<=2*i-1;j++)
{
printf("%c ",j+64);
}
printf("\n");
}
getch();
}

