//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  int disp[2][3],i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("enter value for disp[%d][%d] :",i,j);
      scanf("%d",&disp[i][j]);

    }
  }
  printf("\n two dimensional array elements\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d", disp[i][j]);
      if(j==2)
      {
      printf("\n");
      }
    }
    }
  
  return 0;
}
