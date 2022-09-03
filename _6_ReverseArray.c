/*6.Write a function in C to read n number of values 
in an array and display it in reverse order. 
*/
#include<stdio.h>
void reverse(int b[],int n);
int main()
{
    int a[10],i;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    reverse(a,10);
    return 0;
}
void reverse(int b[],int n)
{
    int i;
    printf("\nReversed Array:\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

