//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
  int n,arr1[100],arr2[100],i;
   printf("copy the elements of one array to another:\n");
   printf("---------------------------------------\n");
   printf("enter number of elements in array:\n");
   scanf("%d",&n);
   printf("input array elements\n");
   for(i=0;i<n;i++)
   {
     printf("element - %d\n",i);
     scanf("%d",&arr1[i]);
   }
   for(i=0;i<n;i++)
   {
     arr2[i]=arr1[i];

   }
   printf("elements stored in first array :\n");
   for(i=0;i<n;i++)
   {
     printf("%d",arr1[i]);
   }
   printf("\n elements stored in second array : \n");
   for(i=0;i<n;i++)
   {
     printf("%d",arr2[i]);
   }
   printf("\n");
   
   return 0; 
}
