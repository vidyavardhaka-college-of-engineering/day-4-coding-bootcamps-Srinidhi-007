//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int a[10], n, i,smallest,largest;
    printf("enter number of elements in an array ;\n");
    scanf("%d", &n);
    printf(" \n enter array elements; \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest=largest=a[0];
    
      for(i=0;i<n;i++)
    {
       if(a[i]>largest)
       largest=a[i];
       if(a[i]<smallest)
       smallest=a[i];
    }
    printf("large element of array %d :",largest);
    printf("small element of array is %d :",smallest);
  
    return 0;
}
