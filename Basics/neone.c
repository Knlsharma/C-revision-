#include <time.h>
#include <stdlib.h>
#include<stdio.h>

    int main()
    {
    int r,sq,i,sum=0;
     
    printf("Enter the number:");
       srand(time(NULL));
        r=rand();
	printf("%d", r);  


    // r = rand()%100 + 1;
    //    printf("%d\n", r);
     
    sq = r * r;
     
    for(i = sq; i > 0; i = i/10)
    sum = sum + i % 10;
     
    if(sum == r)
    printf("%d is a neon number.",r);
    else
    printf("%d is not a neon number.",r);
     
    return 0;
    }