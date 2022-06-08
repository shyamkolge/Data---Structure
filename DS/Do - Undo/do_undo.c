#include <stdio.h>
#include <stdlib.h>

#define max 5
int top = -1, z, n, a[max];
void Do();
void Undo();
void show();

int main()
{
    while (1)
    {
        printf("\n\nThe operations are : ");
        printf("\n 1.Do\n 2.Undo\n 3.Show\n 4.exit\n");
        printf("\n Enter choice : ");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            Do();
            break;
        case 2:
            Undo();
            break;
        case 3: 
             show();
             break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}

void Do()
{
    if (top == max - 1)
    {
        printf(" Overflow !");
    }
    else
    {
        printf("\n Enter element : ");
        scanf("%d", &n);
        top = top + 1;
        a[top] = n;
    }
}

void Undo()
{
    if (top == -1)
    {
        printf(" Empty !");
    }
    else
    {
        printf("\n %d Removed \n", a[top]);
        top = top - 1;
    }
}

void show()
     {
         if(top==1)
         {
             printf("\nUnderflow");

         }
         else
         {
             printf("\n\nElements present : \n");
             for ( int i=top;i>=0;--i)
             printf("%d \n",a[i]);
         }
     }