/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

#include<stdio.h>
main()
{
char i,j;
for(i='A';i<='E';i++)
{
for(j='A';j<='E';j++)
{
printf("%2c",j);
}
printf("\n");
}
getch();
}


