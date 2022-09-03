//9.Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k;
    printf("Enter the First array elements:\n ");
    for(int i = 0; i < 5; i++){
       scanf("%d", &a[i]);
    }
    printf("\nEnter the Second array elements:\n ");
    for( i = 0; i < 5; i++){
       scanf("%d", &b[i]);
    }
     i = 0, j = 0, k = 0;

    while (i < 5 && j < 5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }

    }
    while (i < 5)
    {
        c[k] = a[i];
        k++;
        i++;
    }


    while (j < 5){
        c[k] = b[j];
        k++;
        j++;
    }
     printf("\nFirst Array is:\n\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
     printf("Second Array is:\n\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nFinal array  Merged4:\n \n");
    for(int i = 0; i < 10 ; i++){
        printf(" %d ",c[i]);
    }
    printf("\n");
    return 0;
}
