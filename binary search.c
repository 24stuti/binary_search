#include<stdio.h>

int search(int arr[],int s, int e, int key)
{
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            s=mid+1;
        else
            e=mid;
    }
    return -1;
}
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int len=8;
    int key=5;
    int s=search(arr,0,7,key);
    printf("%d",s);
    return 0;
}
