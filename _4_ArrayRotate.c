/*4.Write a function to rotate an array by n position
in d direction. The d is an indicative value for left
or right. (For example, if array of size 5 is
[32, 29, 40, 12, 70];  n is 2 and d is left, 
then the resulting array after left rotation 2 times
 is [40, 12, 70, 32, 29] ) 
*/
#include <stdio.h>    
void rotateArr(int b[],int length);  
int main()    
{        
    int arr[5],i;
    printf("Enter 5 Numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }       
    int length = sizeof(arr)/sizeof(arr[0]);   
    printf("Original array is: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }   
    rotateArr(arr,length);
    return 0;
}
 void rotateArr(int b[],int length){
    int i,j,n=3;
    for(int i = 0; i < n; i++){    
        int j, last;       
        last = b[length-1];    
        for(j = length-1; j > 0; j--){   
            b[j] = b[j-1];    
        }  
        b[0] = last;    
    }    
        
    printf("\n");    
    printf("Array rotation is: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", b[i]);    
    }    
    return 0;    
}    
