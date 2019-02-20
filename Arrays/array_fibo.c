#include<stdio.h>

void main()
{
   int i,n,a[100];
   
   printf("How many terms to be display : ");
   scanf("%d",&n);
   a[0]=0;a[1]=1;
   // Calculaate Fibonacci series 
   for(i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];
 
printf("First %d Terms of fibonacci series \n",n);
   for(i=0;i<n;i++)
       printf("%5d",a[i]);
 

}