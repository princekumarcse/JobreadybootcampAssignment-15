//3.Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void shortedArr(int b[],int n);
int main()
{
    int a[10];
 shortedArr(a,10);
    return 0;
} 
void shortedArr(int b[],int n)
{
    int i,j,min;
    printf("Enter %d Numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                min=b[i];
                b[i]=b[j];
                b[j]=min;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}