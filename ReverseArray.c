#include<stdio.h>

void ArrayReverse(int arr[], int size)
{
    for(int i= size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}

void ArrayReverseBetweenIndexes(int arr[], int start, int end)
{
    //Partially Reversed/Reverse between two indexes :-
    while(start<end)
    {
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end --;
    }

}

int main()
{
    int size;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    size = sizeof(arr)/sizeof(arr[0]);
    printf("Array:- \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray reverse:- \n");
    ArrayReverse(arr,5);
    printf("\n");
    ArrayReverseBetweenIndexes(arr, 3, 7);

    for(int i=0 ; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}
