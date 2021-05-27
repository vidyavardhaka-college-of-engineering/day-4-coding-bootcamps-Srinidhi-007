//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
 int a[100],i,n,sum=0;
 
 printf("Input number of elements to be stored in array:");
 scanf("%d",&n);

 printf("input %d elements into array:\n",n);
 for(i=0;i<n;i++)
 {
   printf("element - %d :",i);
   scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
   sum=sum+a[i];
  }
 printf("sum of all elements in the array is :%d \n",sum);

   return 0; 
}
