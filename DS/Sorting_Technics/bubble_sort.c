#include<stdio.h>

int main()
{
   int temp,i,j;
   int n = 0;
   
   system("cls");
   printf("Enter the size of array : ");
   scanf("%d",&n);

   int arr[n];

   printf("\nEnter the %d elements in array : \n",n);
   
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
  for(i=0;i<n-1;i++)
  {
     for(j=0;j<n-1-i;j++)
     {
        if(arr[j]>arr[j+1])
        {

            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
  }

printf("\nSorted array is : \n");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
return 0;
}