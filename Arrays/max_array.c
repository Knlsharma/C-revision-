#include <stdio.h>
#include <stdio.h>
#include<time.h>
 
int main()
{
    int array[100], minimum, size, c, location = 1;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &size);
   
    printf("Enter %d integers\n", size);
   int i;
   for(i=0;i<size;i++)
   {      
  srand(time(NULL));
  array[i]=(rand()%51);                              // marks[i]=rand();   
    } 

   for (i=0;i<size;i++) 
    printf("%d \n",array[i]);
   
    minimum = array[0];
   
    for (c = 1; c < size; c++)
    {
        if (array[c] > minimum)
        {
           minimum = array[c];
           location = c+1;
        }
    }
   
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;

 }