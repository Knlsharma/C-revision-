#include<stdio.h>  
#include <stdlib.h>
#include<time.h>
void main(){      

int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

int a[size],b[size],c[10];   
int i;
for(i=0;i<size;i++)
{      
  srand(time(NULL));
  b[i]=(rand()%51);                              // marks[i]=rand();   
}    

for(i=0;i<size;i++)
{      
  srand(time(NULL));
 b[i]=(rand()%51);                              // marks[i]=rand();   
}   
//traversal of array    

for(i=0;i<size;i++)
{      
printf("%d \n",a[i]);    
}     
for(i=0;i<size;i++)
{      
printf("%d \n",b[i]);    
}
for(i=0;i<5;i++)
{
c[i]=a[i];
c[i]=b[i+5];
}   

for(i=0;i<10;i++)
{      
printf("%d \n",c[i]);    
} 

}
 