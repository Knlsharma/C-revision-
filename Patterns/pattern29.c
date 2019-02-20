/*
1
0 0 
1 1 1   
0 0 0 0  
1 1 1 1 1      

*/

#include<stdio.h>
main()
{
int i,j,x=1,y=0;
for(i=1; i<=5; i++)
{
for(j=1;j<=i;j++)
{
if(i%2==0)
printf("%d ",y);
else
printf("%d ",x);
}
printf("\n");
}
getch();
}

