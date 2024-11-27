#include<stdio.h>

void recursion(int array[], int size) 
   {
    if (size == 0) 
    {
        return;
    }
    printf("%d ", array[0]);
   recursion(array + 1, size - 1);
}
int main()
{    
  
    int n;
    printf("Enter  number of elements:");
    scanf("%d",&n);
      int array[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter element %d:",i+1);
       scanf("%d",&array[i]);
   }
   
   recursion(array,n);
   return 0;
}