#include<stdio.h>  
#include <stdlib.h>
#include<time.h>
void main(){      

int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

int marks[size];   
int i;
for(i=0;i<size;i++)
{      
  srand(time(NULL));
  marks[i]=(rand()%51);                              // marks[i]=rand();   
}    
 
//traversal of array    

for(i=0;i<size;i++){      
printf("%d \n",marks[i]);    
}      
}    