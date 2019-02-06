/*
1 2 3 4 5
A B C D E
1 2 3 4 5
A B C D E
1 2 3 4 5       

*/

#include<stdio.h>
main()
{
char j;
int i;
for(int i=1;i<=5;i++)
{
for(char j='A';j<='E';j++)
{
if(i%2==0)
printf("%d ",j);
else
printf("%c ",i);

}
printf("\n");
}
getch();
}

