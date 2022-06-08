#include<stdio.h>
int main()
{
    int arr[25],n,temp,i,j,min,loc;
    system("cls");
    printf("Enter size of elements : ");
    scanf("%d",&n);

    printf("\n\nEnter %d elements : ",n);
    for ( i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        min=arr[i];
        loc=i;
        for(j= i+1 ; j< n ; j++)
        {
             if (arr[j]<min)
            {
                min = arr[j];
                loc = j;
            }
        }
        if (loc!=i)
        {
            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc]= temp;
        }  
    }
     printf("\n\nSorted list in ascending order : \n");
     for(i=0;i<n;i++)
     {
         printf("%d\n",arr[i]);
     }
    return 0;
}