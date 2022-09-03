// 8.Write a function in C to print all unique elements in an array.
#include <stdio.h>
void  uniqueArrElem(int b[],int n);
int main()
{
    int a[10],count=0,i, j, k;
       printf("Enter 10 Numbers:\n ");
       for(i=0;i<10;i++)
            {
	      scanf("%d",&a[i]);
	    }
	    printf("Array Elements are:\n");
	    for(i=0;i<10;i++)
        {
            printf("%d ",a[i]);
        }
        uniqueArrElem(a,10);
        return 0;
}

 void  uniqueArrElem(int b[],int n)
 {
  int i,count ,j;
 printf("\nUnique elements in array are: \n");
    for(i=0; i<10; i++)
    {
        count=0;
        for(j=0; j<11; j++)
        {
            if (i!=j)
            {
		       if(b[i]==b[j])
              {
                 count++;
               }
             }
        }
       if(count==0)
        {
          printf("%d ",b[i]);
        }
    }
       printf("\n\n");
        }
