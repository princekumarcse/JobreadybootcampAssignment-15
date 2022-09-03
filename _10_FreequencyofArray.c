//10.Write a function in C to count the frequency of each element of an array.
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray Elements:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length],checked = -1;

    for( i = 0; i < length; i++){
        int count = 1;
        for( j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                freq[j] = checked;
            }
        }
        if(freq[i] != checked)
            freq[i] = count;
    }
    for(int i = 0; i < length; i++){
        if(freq[i] != checked)
            {
            printf("Frequency of %d is %d\n", arr[i],freq[i]);
            }
        }
    return 0;
}

 
