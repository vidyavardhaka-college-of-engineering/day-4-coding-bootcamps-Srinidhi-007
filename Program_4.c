//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  int a[100],i,n,sum=0;
  printf(" enter number of elements in array :\n");
  scanf("%d",&n);

  printf("enter %d elements into array :\n",n);
  for(i=0;i<n;i++)
  {
    printf("%d",i);
    scanf("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  {
    sum+=a[i];

  }
  printf("sum of all elements of array is : %d ",sum);
  return 0;
}
