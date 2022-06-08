#include<stdio.h>

int main()
{
   int i,j,n,temp,k,a[25];

   printf("How many numbers u are going to enter ? ");
   scanf("%d",&n);

   printf("\nEnter %d elements : ",n);

   for(i=0;i<n;i++)
  {
      scanf("%d",a[i]);
  }

  for(k=1;k<n;k++)
  {
      temp=a[k];
      j=k-1;
      while ((temp<=a[j])&&(j>=0))
      {
         a[j+1] = a[j];
         j=j-1;
      }
      a[j+1]=temp;
      
  }


  printf("\nOrder of sorted elements : ");
  for(i=0;i<n;i++)
  {
      printf("%d",a[i]);
  }


    return 0;
}