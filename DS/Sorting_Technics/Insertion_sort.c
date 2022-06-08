#include<stdio.h>

int main(){

   int i,j,num,k,temp,arr[25];

   printf("Enter the size of array : ");
   scanf("%d",&num);

   printf("Enter %d elements : ",num);

   for(i=0;i<num;i++)
   {
       scanf("%d",&arr[i]);
   }

   for ( k=1; k<num; k++)
   {
       temp = arr[k];
       j=k-1;
       while ((temp<=arr[j])&&(j>=0))
       {
           arr[k+1]=arr[k];
           j=j-1;
       }  
        arr[k+1]= temp;
   }
   
   printf("Order of sorted elements : ");
   for(i=0;i<num;i++)
   {
       printf("%d",arr[i]);
   }

    return 0;
}