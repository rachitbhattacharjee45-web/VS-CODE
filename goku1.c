#include<stdio.h>
int findLargest(int arr[],int n)
{
    int largest=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]>largest){
        largest=arr[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=findLargest(arr,size);
    printf("Largest Element is %d\n",largest);
    return 0;
}