/*5.Write a function to find the first occurrence
of adjacent duplicate values in the array.
Function has to return the value of the element. 
*/
#include<stdio.h>
int duplicateElm(int b[],int n);
int main()
{
    int a[10],i;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    duplicateElm(a,10);
    return 0;
}
int duplicateElm( int b[],int n)
{

    int i;
    for(i=0;i<10;i++)
    {
        if(b[i]==b[i+1])
        break;
    }
    if(i<10)
    printf("\nFirst Duplicate Element is: %d ",b[i]);
    else
    printf("\nNo Any Element is Duplicate");
}