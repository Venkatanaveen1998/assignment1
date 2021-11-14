#include <stdio.h>    
int main()    
{    
    int arr[] = {0,1, 2, 3, 4};    
    int len = sizeof(arr)/sizeof(arr[0]);    
    int new[len];    
    for (int i = 0; i < length; i++) 
    {     
        new[i] = arr[i];     
    }      
    printf("Elements of new array: \n");    
    for (int i = 0; i < len; i++) 
    {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}
