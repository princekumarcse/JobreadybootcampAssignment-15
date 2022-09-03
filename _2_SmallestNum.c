//2.Write a function to find the smallest number from the given array of any size. (TSRS)
 #include<stdio.h>
 int smallest(int b[],int n);
 int main()
 {
    int a[10];
    printf("The Smallest Number is : %d",smallest(a,10));
    return 0;
 }
 int smallest(int b[],int n)
 {
    int i,min;
    printf("Enter %d Numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]<min)
        min=b[i];
    }
    return min;
 }