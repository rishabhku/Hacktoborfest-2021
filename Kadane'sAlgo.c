//kadane,s Algorithms is the contiguos positive number of array.
// Very Very IMPORTANT......
#include<stdio.h>
#include<limits.h>
int Displayarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int maxSubarraySum(int arr[], int n)
{
        int max =INT_MIN, low = 0;
        for(int i=0; i<n; i++)
        {
                low = low + arr[i];
            if (max <low)
            {
                max = low;
            }
            if (low < 0)
            {
                low = 0;
            }
        }
        printf("Sum of these array is :- %d",max);
}
int main()
{
     int n=4 ; 
    int arr[4]={2,-4,6,9};
    printf("Array of index %d and the array is ",n);
    Displayarray(arr,n);
    maxSubarraySum(arr, n);
    return 0;
}
