/*
A
C B 
E D C 
G F E D 
I H G F E      

*/

#include<stdio.h>
main()
{
int i, j;
for(i=1; i<=5; i++)
{
for(j=2*i-1;j>=i;j--)
{
printf("%c ",j+64);
}
printf("\n");
}
getch();
}

