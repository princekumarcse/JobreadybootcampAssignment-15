/*7.Write a function in C to count a total number of duplicate elements in an array. */
#include<stdio.h>
void TotDuplicateElem(int b[],int n);
int main()
{
    int n,count=0;
    printf("Enter Number of Array:\n");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     TotDuplicateElem(a,10);
    return 0;
}
void TotDuplicateElem(int b[],int n)
{
    int i,j,count;
 
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
             count++;
            }
        }
    }
   printf("Number of Duplicate Element :%d", count);
}