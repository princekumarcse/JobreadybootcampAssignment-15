//1.Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int b[],int n);
int main()
{
    int a[10],x;
    x=greatest(a,10);
    printf("The Greatest  Number is: %d\n",x);
    return 0;
}
int greatest(int b[],int n)
{
    int i,max=0;
    printf("Enter %d Numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>max)
        max=b[i];
    }
    return max;
}
